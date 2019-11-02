
#ifndef CONFIGURATION_FILES
#define CONFIGURATION_FILES

#include <string>
#include <map> // We could also use unordered map here...
#include <vector>

class ConfigurationFile
{
private:
  std::map<std::string, std::map<std::string, std::string> > m_contents; // The "> >" means I'm old school :)
  bool m_saveChanges;
  std::string m_fullFileName;

public:
	ConfigurationFile(const std::string &fullFileName);
	~ConfigurationFile();
	std::string read(const std::string &section, const std::string &key);
	std::vector<std::string> readSections();
	std::vector<std::string> readKeys(const std::string &section);
	void write(const std::string &section, const std::string &key, const std::string &value);
};

#endif // CONFIGURATION_FILES
