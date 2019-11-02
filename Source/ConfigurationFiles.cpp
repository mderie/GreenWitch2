
#include <iostream>
#include <fstream>

#include "ConfigurationFiles.hpp"
#include "CommonStuffs.hpp"

// RAII like ctor
ConfigurationFile::ConfigurationFile(const std::string &fullFileName)
{
	std::ifstream ifs;
	std::string line;
	size_t pos;
	std::string section;

	//std::cout << "filename = " << filename << std::endl;

	ifs.open(fullFileName);
	while(ifs.good())
	{
		std::getline(ifs, line);
		//std::cout << "line = " << line << std::endl;
		if (line[0] == ';')
		{
			//std::cout << "Found comment = " << line << std::endl;
			continue; // Just ignore comment :)
		}

		if (line.size() == 0)
		{
			//std::cout << "Found empty line !" << line << std::endl;
			continue; // Just ignore empty line
		}

		if ((line.front() == '[') and (line.back() == ']'))
		{
			section = line.substr(1, line.size() - 2); // We also use cbegin() and cend() but why bother !
			//std::cout << "Found section = " << section << std::endl;
		}
		else if ((pos = line.find('=', 0)) != std::string::npos)
		{
			//std::cout << "key = '" << line.substr(0, pos) << "', value = '" << line.substr(pos + 1, line.size() - pos + 1) << "'" << std::endl;
			m_contents[section][line.substr(0, pos)] = line.substr(pos + 1, line.size() - pos + 1);
		}
		else
		{
			std::cout << "Found bad line in filename = " << fullFileName << " value = " << line << std::endl;
			/*
			We can't log yet ! Can we ?-)
			logThis("Found error in the configuration file !", Target::misc);
			logThis("Filename = ...", Target::misc);
			logThis(filename.c_str(), Target::misc);
			logThis("Line = ...", Target::misc);
			logThis(line.c_str(), Target::misc);
			*/
		}
	}
	ifs.close();
	m_saveChanges = false;
	m_fullFileName = fullFileName;
}

ConfigurationFile::~ConfigurationFile()
{
	if (m_saveChanges)
	{
		std::ofstream ofs;
		ofs.open(m_fullFileName);
		for (auto const &kvp1 : m_contents)
		{
			ofs << '[' << kvp1.first << "]" << std::endl;
			for (auto const &kvp2 : kvp1.second)
			{
				ofs << kvp2.first << '=' << kvp2.second << std::endl;
			}
		}
		ofs.close();
	}

	m_contents.clear();
}

std::vector<std::string> ConfigurationFile::readSections()
{
	std::vector<std::string> result;
	result.reserve(m_contents.size());
	for (auto const &kvp : m_contents)
	{
		result.push_back(kvp.first);
	}
	return result;
}

std::vector<std::string> ConfigurationFile::readKeys(const std::string &section)
{
	std::vector<std::string> result;
	result.reserve(m_contents[section].size());
	for(auto const &kvp : m_contents[section])
	{
		result.push_back(kvp.first);
	}

	return result;
}

std::string ConfigurationFile::read(const std::string &section, const std::string &key)
{
	if (m_contents.find(section) == m_contents.end())
	{
		return "";
	}
	else if (m_contents[section].find(key) == m_contents[section].end())
	{
		return  "";
	}
	else
	{
		return m_contents[section][key];
	}
}

void ConfigurationFile::write(const std::string &section, const std::string &key, const std::string &value)
{
	m_contents[section][key] = value;
	m_saveChanges = true;
}
