#include "configUtils.hh"
using json = nlohmann::json;
using namespace std;


void writeJSONToFile(const json &j, const string &filename) {
    ofstream file(filename);
    file << j.dump(4);  // 4 spaces for indentation
}


ConfigParser::ConfigParser(const string&configFilePath) {
    jsonData = readJson(configFilePath);
    getInputFilePath();
    parseRules();
    parseNameMap();
}

void ConfigParser::getInputFilePath(){
    inputFile = jsonData[JSON_CODE].get<string>();
    if (jsonData.contains(JSON_OUT)){
        outputFile = jsonData[JSON_OUT].get<string>();
    }
    if (jsonData.contains(JSON_BAOUT)){
        BAoutputFile = jsonData[JSON_BAOUT].get<string>();
    }
}

// parse nameMap
void ConfigParser::parseNameMap(){
    if (jsonData.contains(JSON_NMAP)){
        for (auto& oldName : jsonData[JSON_NMAP].items()){
            nameMap[oldName.key()] = oldName.value().get<string>();
        }
    }
}

void ConfigParser::parseRules(){
    if (jsonData.contains(JSON_RULES)) {
        for (const auto& rule : jsonData[JSON_RULES]) {
            propRules.push_back(rule.get<string>());
        }
    }
}


// read json from file
json ConfigParser::readJson(const string& filepath){
    std::ifstream file(filepath);
    if (!file){
        throw runtime_error("Fail to open JSON file: " + filepath);
    }

    json data;
    try {
        file >> data;
    } catch (json::parse_error& e){
        throw runtime_error("Fail to parse JSON file: " + string(e.what()));
    }
    return data;
}
