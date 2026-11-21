#include <iostream>
#include <Windows.h>
#include <string>
#include <cctype>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    int digitCount = 0;
    int letterCount = 0;

    for (char c : text) {
        if (std::isalpha(c)) {
            letterCount++;
        }
        if (std::isdigit(c)) {
            digitCount++;
        }
    }
    std::cout << "\n=== РЕЗУЛЬТАТ ПОДСЧЁТА ===" << std::endl;
    std::cout << "Всего букв: " << letterCount << std::endl;
    std::cout << "Всего цифр: " << digitCount << std::endl;

    return 0;
}
