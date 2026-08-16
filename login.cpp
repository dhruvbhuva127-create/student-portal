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
