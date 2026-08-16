#include <string>
using namespace std;

struct Profile {
    string username;
    string email;
    string bio;
};

bool isProfileComplete(const Profile& profile) {
    return !profile.username.empty() &&
           !profile.email.empty();
}

bool isValidEmail(const string& email) {
    size_t at = email.find('@');
    size_t dot = email.find('.', at);

    return at != string::npos &&
           dot != string::npos &&
           at > 0 &&
           dot > at + 1 &&
           dot < email.length() - 1;
}

bool isValidUsername(const string& username) {
    if (username.length() < 3 || username.length() > 20) {
        return false;
    }

    for (char ch : username) {
        if (!((ch >= 'a' && ch <= 'z') ||
              (ch >= 'A' && ch <= 'Z') ||
              (ch >= '0' && ch <= '9') ||
              ch == '_')) {
            return false;
        }
    }

    return true;
}

bool isValidBio(const string& bio) {
    const size_t maxBioLength = 160;

    if (bio.length() > maxBioLength) {
        return false;
    }

    for (char ch : bio) {
        if (ch == '\n' || ch == '\r') {
            return false;
        }
    }

    return true;
}
