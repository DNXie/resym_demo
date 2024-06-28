#ifndef CONFIG_UTILS_HH
#define CONFIG_UTILS_HH

#include <unordered_map>
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream> 
#include <optional>

using json = nlohmann::json;
using namespace std;

// define macros for the json entries
#define JSON_CODE "inputFile"
#define JSON_OUT "outputFile"
#define JSON_BAOUT "beyond_access_out"
#define JSON_NMAP "nameMap"
#define JSON_RULES "propRules"

void writeJSONToFile(const nlohmann::json &j, const string &filename);

class ConfigParser {
public: 
    string inputFile;
    optional<string> outputFile;
    optional<string> BAoutputFile;  //beyond access
    unordered_map<string, string> nameMap;
    vector<string> propRules;

    ConfigParser(const string&configFilePath);
    void getInputFilePath();
    void parseNameMap();
    void parseRules();
private:
    json jsonData;
    // read json from file
    json readJson(const string& filepath);
};


#endif 