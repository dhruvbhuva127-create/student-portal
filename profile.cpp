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
