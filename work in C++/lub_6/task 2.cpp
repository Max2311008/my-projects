#include <iostream> //Подключаем заголовочный файл
#include <Windows.h>
#include <ctime> // библиотека для time

int main() { //Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 2,6,7 строки правильно обрабатывают кириллицу
    const int SIZE = 15; // Создание размера массива
    int nums[SIZE]; // Создание массива

    // Создание гинератора случайных чисел
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Заполнить массив случайными числами от 0 до 50
    std::cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        nums[i] = std::rand() % 51; // Создаём диапазон до 50
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";

    // Ищем нули
    int first = -1;
    int last = -1;

    for (int i = 0; i < SIZE; i++) {
        if (nums[i] == 0) {
            if (first == -1) {
                first = i; 
            }
            last = i;     
        }
    } // Процесс поиска нулей

  
    if (first == -1 || first == last) {
        std::cout << "В массиве меньше двух нулей. Сумма = 0\n";
    } // Условие при одном 0 или без них
    else {
        int sum = 0;
        for (int i = first + 1; i < last; i++) {
            sum += nums[i]; // Складываем элементы между нулями
        }
        std::cout << "Первый ноль на позиции: " << first << "\n";
        std::cout << "Последний ноль на позиции: " << last << "\n";
        std::cout << "Сумма элементов между ними = " << sum << "\n";
    }

    return 0; //Вывод результата
}
