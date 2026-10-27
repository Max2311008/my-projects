#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <cmath>
#include <limits>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	double first, last, shag;
	while (true) {
		std::cout << "Введите начало интервала: ";
		if (std::cin >> first) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	while (true) {
		std::cout << "Введите конец интервала: ";
		if (std::cin >> last) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	while (true) {
		std::cout << "Введите шаг интервала: ";
		if (std::cin >> shag) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	if (first > last) {
		std::cout << "ОШИБКА: начало интервала не может быть больше конца!" << std::endl;
		return 1;
	} // Условие для правильного построения функции
	if (shag <= 0) {
		std::cout << "ОШИБКА: шаг не может быть отрицательным!" << std::endl;
		return 1;
	}
	// Условие для правильного построения функции
	double xFirst = first;
	double yFirst = 1 / (xFirst * xFirst + 1);
	double maxY = yFirst;
	double maxX = xFirst;
	// Инициализация минимума и максимума первым значением
	std::cout << "\n$====================================$" << std::endl;
	std::cout << " x  |  y = 1/(x**2 + 1) " << std::endl;
	std::cout << "$====================================$" << std::endl;
	std::cout << std::fixed << std::setprecision(4);
	for (double x = first; x <= last + 1e-9; x += shag) { // Использование + 1e-9 для учёта погрешности double
		double y = 1 / (x * x + 1); // Вычисляем значение функции
		std::cout << std::setw(7) << x << "|" << std::setw(9) << y << std::endl;

		if (y > maxY) {
			maxY = y;
			maxX = x;
		} // Обновление максимума
	}
	std::cout << "$=====================================$" << std::endl;
	std::cout << "\nРезультаты поиска:" << std::endl;
	std::cout << "Наибольшее значение: "  << maxY << std::endl;
	return 0;
}
