#include <iostream>
#include <string>

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}

void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

bool loginUser(const std::string& username, const std::string& password) {
    return username == "admin" && password == "1234";
}

int main() {
    printWelcomeMessage();
    greetUser();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2
              << " is: " << result << std::endl;

    std::string username;
    std::string password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    if (loginUser(username, password)) {
        std::cout << "Login successful." << std::endl;
    } else {
        std::cout << "Invalid username or password." << std::endl;
    }

    std::cout << "Program finished successfully." << std::endl;

    return 0;
}