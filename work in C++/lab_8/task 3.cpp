#include <iostream>
#include <Windows.h>
#include <string>
#include <cctype> // для std::isdigit

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text); 

    int numbers[1000];    // Массив для хранения найденных чисел
    int count = 0;        // Сколько чисел мы уже нашли
    std::string pig = ""; //  хранение текущего числа (в виде текста)

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];

        if (std::isdigit(c)) {
            // Если это цифра, кладем её в хранилище
            pig += c;
        }
        else {
            if (pig != "") {
                numbers[count] = std::stoi(pig); 
                count++;                            
                pig = "";                        
            }
        }
    }
    if (pig != "") {
        numbers[count] = std::stoi(pig);
        count++;
    }
    std::cout << "[";
    for (int i = 0; i < count; i++) {
        std::cout << numbers[i];
        if (i < count - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
