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

void setNotifications(UserSettings& settings, bool enabled) {
    settings.notificationsEnabled = enabled;
}

bool shouldSendNotification(const UserSettings& settings) {
    return settings.notificationsEnabled;
}

void setDarkMode(UserSettings& settings, bool enabled) {
    settings.darkMode = enabled;
}

string themeName(const UserSettings& settings) {
    return settings.darkMode ? "dark" : "light";
}

bool updateLanguage(UserSettings& settings, const string& language) {
    if (!isValidLanguage(language)) {
        return false;
    }

    settings.language = language;
    return true;
}
