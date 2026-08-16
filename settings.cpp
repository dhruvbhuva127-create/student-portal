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
