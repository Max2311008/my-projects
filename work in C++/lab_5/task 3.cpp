#define NOMINMAX
#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double first, last, shag;

    while (true) {
        std::cout << "Введите начало интервала: ";
        if (std::cin >> first) {
            break;
        }
        std::cout << "ОШИБКА! Введите число заново.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    while (true) {
        std::cout << "Введите конец интервала: ";
        if (std::cin >> last) {
            break;
        }
        std::cout << "ОШИБКА! Введите число заново.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    while (true) {
        std::cout << "Введите шаг интервала: ";
        if (std::cin >> shag) {
            break;
        }
        std::cout << "ОШИБКА! Введите число заново.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } 

    if (first > last || shag <= 0) {
        cout << "Ошибка ввода: начало > конца или шаг <= 0!\n";
        return 1;
    }

    double sum = 0.0; // Аккумулятор для интеграла

    std::cout << std::fixed << std::setprecision(4);

    // Цикл табуляции
    for (double x = first; x <= last + 1e-9; x += shag) {
        double y = x * x;

        std::cout << std::setw(8) << x << " | " << std::setw(12) << y << std::endl;

        // Метод трапеций: крайние точки делим на 2
        if (x == first || x + shag > last + 1e-9) {
            sum += y / 2.0;
        }
        else {
            sum += y;
        }
    }

    sum *= shag; // Умножаем сумму на шаг

    //  первообразная x^3 / 3 для нахождения путём аналитического значения
    double otv = (last * last * last - first * first * first) / 3.0;

    cout << "\n--- Результаты ---\n";
    cout << "Метод трапеций:  " << sum << "\n";
    cout << "Аналитический: " << otv << "\n";
    cout << "Погрешность:     " << abs(sum - otv) << "\n";

    return 0; 
}
