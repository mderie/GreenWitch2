
#ifndef COMMON_STUFFS
#define COMMON_STUFFS

#include <string>
#include <vector>

//std::experimental::filesystem::path::preferred_separator which should return either / or \ depending on your platform.
#ifdef WIN32
#define PATH_SEPARATOR '\\'
#else
#define PATH_SEPARATOR '/'
#endif

#ifdef WIN32
#include <ciso646> // and and or keyword support :)
#endif

// Source = http://www.cplusplus.com/forum/general/33669/
template <typename T, unsigned size>
inline unsigned sizeOfArray(const T(&)[size]) { return size; }

enum class Target { screen, midiIn, midiOut, misc, last_item }; //TODO: Refine midi by channel ?
const std::string targets[(int) Target::last_item] = { "screen", "midiIn", "midiOut", "misc" }; // Don't forget the leading const :)
void setLogFilter(bool value, Target t);

std::string intToStr(int value); // So Delphi...
std::string runningFolder();
//bool fileExist(const char *fullFileName);
bool FileExists(const std::string &fullFileName);
std::string stringUpper(const std::string& s);
void join(std::string& dest, const std::string& item, const std::string& delimiter); // Little string accumulator helper
std::vector<std::string> split(const std::string& str, const std::string& delimiter); // Almost the opposite :)
void logThis(const char *s, Target t);
void logThis2(const char *format, Target t, ...);
std::string appendPath(const std::vector<std::string>& pieces);
std::string trim(const std::string &value);

#endif // COMMON_STUFFS
