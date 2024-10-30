#include <iostream>
#include <vector>
#include <map>
#include <string>

class Settings {
private:
    static std::map<std::string, std::string> settingsMap;

public:
    static void Add(const std::string& key, const std::string& value) {
        settingsMap[key] = value;
    }

    static std::string Get(const std::string& key) {
        return settingsMap[key];
    }

    static void Print() {
        for (const auto& pair : settingsMap) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }
};

std::map<std::string, std::string> Settings::settingsMap;

int main() {

    std::vector<float> vec = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    auto printVector = [](const std::vector<float>& v) {
        for (float num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    };

    printVector(vec);

    vec.insert(vec.begin() + 3, 3.5f);
    printVector(vec); 

    vec.pop_back();
    printVector(vec); 

    Settings::Add("Ключ1", "Значение1");
    Settings::Add("Ключ2", "Значение2");
    Settings::Print();

    return 0;
}
