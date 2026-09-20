#define NOMINMAX // Запретит Windows.h определять макросы min и max
#include <iostream>  //Подключаем заголовочный файл
#include <limits>
#include <Windows.h>
#include <iomanip> // библиотека для fixed и setprecision()
#include <cmath> 
int main() { //Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 4, 8, 9 строки обрабатывают кириллицу
    int number1, number2; //Создание переменных с целыми числами
    double number3, number4;//Создание переменных с числами с точкой
    while (true) { //Ввод числе в int
        std::cout << "Введите number1: "; 
        if (std::cin >> number1) {
            std::cout << "Введите number2: ";
            if (std::cin >> number2)
                break;
        } //Условие повторного ввода данных при ошибке

        std::cout << "Ошибка! Введите число заново.\n";//Вывод текста на экран

        std::cin.clear();// сброс флага ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// очистка буфера от мусора
    }
    while (true) { //Ввод числе в double
        std::cout << "Введите number3 ";
        if (std::cin >> number3) {
            std::cout << "Введите number4: ";
            if (std::cin >> number4)
                break;
        } //Условие повторного ввода данных при ошибке

        std::cout << "Ошибка! Введите число заново.\n"; //Вывод текста на экран

        std::cin.clear();// сброс флага ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// очистка буфера от мусора
    }
    std::cout << "\n$=== int ===$\n";
    std::cout << "Сумма = " << number1 + number2 << '\n'; // Вывод суммы(int) на экран
    std::cout << "Разность = " << number1 - number2 << '\n'; // Вывод разности(int) на экран
    std::cout << "Произведение = " << number1 * number2 << '\n'; // Вывод произведения(int) на экран
    if (number2 != 0) {
        std::cout << "Частное =  " << number1 / number2 << '\n'; // Вывод частного(int) на экран
        std::cout << "Остаток от деления =  " << number1 % number2; // Вывод остатка(int) на экран
    }
    else {
        std::cerr << "Нельзя делить на 0!!!!";
    } // Вывод на экран что на ноль делить нельзя


    std::cout << "\n$=== double ===$\n";
    std::cout << "Сумма =  " << number3 + number4 << '\n'; // Вывод суммы(double) на экран
    std::cout << "Разность = " << number3 - number4 << '\n'; // Вывод разности(double) на экран
    std::cout << "Произведение = " << number3 * number4 << '\n'; // Вывод произведения(double) на экран
    if (std::fabs(number4) != 0.0) {
        std::cout << "Частное = " << number3 / number4 << '\n'; // Вывод частного(double) на экран
    }
    else {
        std::cerr << "Нельзя делить на 0!!!!";
    } // Вывод на экран что на ноль делить нельзя

    std::cout << "\n$=== явное приведение ===$\n";
    if (number2 != 0) { // Условие что number2 не равно 0
        std::cout << "Деление без явного приведения = " << number1 / number2 << '\n';
        std::cout << "Деление с явным приведением = " << static_cast<double>(number1) / number2; 
        // явное приведение к операнду double
    }


    std::cout << "\n$=== усечение vs округление ===$\n";
    double number5 = 5.6;
    std::cout << "Усечение =  " << std::trunc(number5) << '\n'; // Изменение числа при усечении
    std::cout << "Округление =  " << std::round(number5) << '\n'; // Изменение числа при округлении

    std::cout << "\n$=== float vs double ===$\n";
    float a = 1.0f / 3.0f;
    double b = 1.0 / 3.0;
    std::cout << std::fixed << std::setprecision(14);
    std::cout << "float:  " << a << '\n';
    std::cout << "double: " << b << '\n';

    std::cout << "\n$=========== ТАБЛИЦА СРАВНЕНИЯ int vs double ===========$\n";
    std::cout << std::left << std::setw(16) << "Операция" //16 символов слева
        << std::right << std::setw(14) << "int"  // 14 символов справа
        << std::setw(16) << "double" << '\n'; //16 символов справа
    std::cout << std::string(46, '-') << '\n'; // строка шириной 46 -

    std::cout << std::fixed << std::setprecision(4);

    std::cout << std::left << std::setw(16) << "Сумма"  //16 символов слева
        << std::right << std::setw(14) << (number1 + number2) // 14 символов справа
        << std::setw(16) << (number3 + number4) << '\n'; //16 символов справа

    std::cout << std::left << std::setw(16) << "Разность"  //16 символов слева
        << std::right << std::setw(14) << (number1 - number2)  //14 символов справа
        << std::setw(16) << (number3 - number4) << '\n'; //16 символов справа

    std::cout << std::left << std::setw(16) << "Произведение" //16 символов слева
        << std::right << std::setw(14) << (number1 * number2) //14 символов справа
        << std::setw(16) << (number3 * number4) << '\n';//16 символов справа

    if (number2 != 0 && std::fabs(number4) != 0.0) { //Условие что number2 и модуль number4 не равны 0
        std::cout << std::left << std::setw(16) << "Частное"  //16 символов слева
            << std::right << std::setw(14) << (number1 / number2) //14 символов справа
            << std::setw(16) << (number3 / number4) << '\n'; //16 символов справа
    }
    if (number2 != 0) {
        std::cout << std::left << std::setw(16) << "Остаток"  //16 символов слева
            << std::right << std::setw(14) << (number1 % number2) //14 символов справа
            << std::setw(16) << "н/д" << '\n'; //16 символов справа
    }

    return 0; //Вывод результат
}
