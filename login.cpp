#include <iostream>
#include <string>
using namespace std;

struct User {
    string username;
    string password;
};

bool authenticate(const User& user, const string& username,
                  const string& password) {
    return user.username == username && user.password == password;
}

bool isValidPassword(const string& password) {
    if (password.length() < 8) {
        return false;
    }

    bool hasDigit = false;
    for (char ch : password) {
        if (ch >= '0' && ch <= '9') {
            hasDigit = true;
            break;
        }
    }

    return hasDigit;
}
