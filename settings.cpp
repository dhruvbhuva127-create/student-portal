#include <string>
using namespace std;

struct UserSettings {
    bool notificationsEnabled;
    bool darkMode;
    string language;
};

bool isValidLanguage(const string& language) {
    return language == "en" ||
           language == "hi" ||
           language == "gu";
}
