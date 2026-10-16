#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream>  // Подключаем заголовочный файл
#include <Windows.h>
#include <limits>

int main() { // объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 3,5,6 строки обрабатывают кириллицу

    int number;
    int menu;
    // Создание переменных

    while (true) {
        std::cout << "\n$==== Главное меню ====$\n";
        std::cout << "1 - Время начала и конца уроков\n";
        std::cout << "2 - Время начала и конца уроков с переменами\n";
        std::cout << "3 - Выход\n";
        std::cout << "Введите ваш выбор: ";

        while (true) {
            if (std::cin >> menu && menu >= 1 && menu <= 3)
                break;
            std::cout << "ОШИБКА! Введите число от 1 до 3.\n";
            std::cin.clear(); // сброс флага 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // очистка буфера от мусора
        } // Вывод  блока меню

        switch (menu) {

        case 1:
            std::cout << "$=== Введите номер урока ===$\n";
            while (true) {
                if (std::cin >> number && number >= 1 && number <= 8)
                    break;
                std::cout << "ОШИБКА! Введите номер урока от 1 до 8.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            switch (number) {
            case 1: std::cout << "1 урок: 8:30 - 9:15\n"; break;
            case 2: std::cout << "2 урок: 9:25 - 10:10\n"; break;
            case 3: std::cout << "3 урок: 10:20 - 11:05\n"; break;
            case 4: std::cout << "4 урок: 11:25 - 12:10\n"; break;
            case 5: std::cout << "5 урок: 12:20 - 13:05\n"; break;
            case 6: std::cout << "6 урок: 13:15 - 14:00\n"; break;
            case 7: std::cout << "7 урок: 14:10 - 14:55\n"; break;
            case 8: std::cout << "8 урок: 15:05 - 15:50\n"; break;
            default: std::cout << "НАПИШИ ЧИСЛО ОТ 1 ДО 8\n"; break;
            } // Блок с началом и концом уроков (1-8)
            break;

        case 2:
            std::cout << "$=== Введите номер урока ===$\n";
            while (true) {
                if (std::cin >> number && number >= 1 && number <= 8)
                    break;
                std::cout << "ОШИБКА! Введите номер урока от 1 до 8.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            switch (number) {
            case 1: std::cout << "1 урок: 8:30 - 9:15 (перемена 10 минут)\n"; break;
            case 2: std::cout << "2 урок: 9:25 - 10:10 (перемена 10 минут)\n"; break;
            case 3: std::cout << "3 урок: 10:20 - 11:05 (Большая перемена 20 минут)\n"; break;
            case 4: std::cout << "4 урок: 11:25 - 12:10 (перемена 10 минут)\n"; break;
            case 5: std::cout << "5 урок: 12:20 - 13:05 (перемена 10 минут)\n"; break;
            case 6: std::cout << "6 урок: 13:15 - 14:00 (перемена 10 минут)\n"; break;
            case 7: std::cout << "7 урок: 14:10 - 14:55 (перемена 10 минут)\n"; break;
            case 8: std::cout << "8 урок: 15:05 - 15:50 (конец занятий)\n"; break;
            default: std::cout << "НАПИШИ ЧИСЛО ОТ 1 ДО 8\n"; break;
            } // Блок с началом и концом уроков (1-8) с переменными
            break;

        case 3:
            std::cout << "ВЫХОД\n";
            return 0;
            // Блок Выход

        default:
            std::cout << "Напишите число от 1 до 3\n";
            break;
        } // Условие будет введён не тот символ, то выведится текст
    }

    return 0; // Вывод результата
}
