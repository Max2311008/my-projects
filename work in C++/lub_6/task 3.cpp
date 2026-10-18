#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream> // подключаем заголовочный файл
#include <iomanip> // библиотека для setw
#include <cstdlib> // библиотека для  создания случайных чисел
#include <ctime> // библиотека для time
#include <Windows.h>
#include <limits> // библиотека для лимитов
#include <string> // библиотека для раоты со строчными значениями

// Функция для вывода массива (для удобства)
void printArray(const int arr[], int size, const std::string& title) {
    std::cout << title << ": ";
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(4) << arr[i];
    }
    std::cout << std::endl;
}

int main() { //Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int SIZE = 20; // Создание размера для массива
    int arr[SIZE]; // Создание массива
    int number; // создание переменной

    while (true) {
        std::cout << "$========= ГЛАВНОЕ МЕНЮ =========$\n";
        std::cout << "1 Ввод массива случайными числами\n";
        std::cout << "2 Ввод массива с помощью клавиатуры\n";
        std::cout << "ВАШ ВЫБОР: ";
        std::cin >> number;
        std::cout << "$================================$\n";

        if (std::cin.fail() || (number != 1 && number != 2)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный ввод, попробуйте снова.\n";
        } // Проверка на наличие правильного ввода
        else {
            break;
        }
    } //Создание меню для удобства

    // Заполнение массива (в зависимости от выбора)
    if (number == 1) { // Создание массива с помощью случайных чисел
        std::srand(static_cast<unsigned>(std::time(nullptr)));
        for (int i = 0; i < SIZE; i++) {
            arr[i] = 1 + std::rand() % 100;
        }
    } 
    else { //Создание массива с помощью ввода значений с клавиатуры
        std::cout << "Введите 20 чисел (от 1 до 100):\n";
        for (int i = 0; i < SIZE; i++) {
            int tmp;
            while (true) {
                std::cout << "Элемент [" << i << "]: ";
                std::cin >> tmp;
                if (std::cin.fail() || tmp < 1 || tmp > 100) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "ОШИБКА! Введите число от 1 до 100: ";
                }
                else {
                    arr[i] = tmp;
                    break;
                }
            }
        }
    }
    printArray(arr, SIZE, "Исходный массив"); //Вывод исходного массива

    // Создаем реверс массива
    int reversed[SIZE];
    for (int i = 0; i < SIZE; i++) {
        reversed[i] = arr[SIZE - 1 - i];
    }
    printArray(reversed, SIZE, "Реверс массива"); //Вывод реверса массива

    // Проверка на палиндром 
    bool Palindrom = true;
    for (int i = 0; i < SIZE / 2; i++) { // Идем только до середины, потому что у палиндрома должны быть равные числа до центра
        if (reversed[i] != arr[i]) {     // Если нашли отличие
            Palindrom = false;
            break;
        }
    }

    std::cout << "\n$==== ВЫВОД РЕЗУЛЬТАТА ====$\n";
    if (Palindrom) {
        std::cout << "Массив является Палиндромом\n";
    } // Если массив является палиндромом
    else {
        std::cout << "Массив не является Палиндромом\n";
    } // Если массив не является палиндромом

    return 0; //Вывод результата
}
