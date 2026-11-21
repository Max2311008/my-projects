#include <iostream>
#include <Windows.h>
#include <string>
#include <cctype>
#include <sstream> 

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    std::stringstream ss(text);
    std::string word;
    int wordCount2 = 0;
    int wordCount1 = 0;
    int wordCount3 = 0;
    while (ss >> word) {
        if (word.empty()) continue;
        unsigned char a = word[0];
        bool English = (a >= 'A' && a <= 'Z');
        if (English) {
            wordCount1++;
        }
        else {
            wordCount2++;
        }
    }
    wordCount3 = wordCount1 + wordCount2;
    std::cout << "\n$===Результаты вывода===$" << std::endl;
    std::cout << "\nКоличество слов всего: " << wordCount3 << std::endl;
    std::cout << "\nКоличество слов с заглавной буквы: " << wordCount1 << std::endl;
    std::cout << "\nКоличество слов со строчной буквы " << wordCount2 << std::endl;

    return 0;
}
