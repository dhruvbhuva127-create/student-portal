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
