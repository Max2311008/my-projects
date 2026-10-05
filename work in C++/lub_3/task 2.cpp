#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream> // Подключаем заголовочный файл
#include <Windows.h>
#include <cmath>
#include <iomanip> // библиотека для fixed и setprecision()
int main() { // объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 3,8,9 строки обрабатывают кириллицу
	double number1, number2, number3; // создание переменной с плавающей точкой
	while (true) {
		std::cout << "Введите число 1: ";
		if (std::cin >> number1) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	while (true) {
		std::cout << "Введите число 2: ";
		if (std::cin >> number2) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	while (true) {
		std::cout << "Введите число 3: ";
		if (std::cin >> number3) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	if (number1 <= number2 && number2 <= number3) {
		std::cout << "\n === Ответ === | " << number1 << " | " << number2 << " | " << number3;
	}
	else if (number2 <= number1 && number1 <= number3) {
		std::cout << "\n === Ответ === | "  << number2 << " | " << number1 << " | " << number3;
	}
	else if (number3 <= number2 && number2 <= number1) {
		std::cout << "\n === Ответ === | " << number3 << " | " << number2 << " | " << number1;
	}
	else if (number3 <= number1 && number1 <= number2) {
		std::cout << "\n === Ответ === | " << number3 << " | " << number1 << " | " << number2;
	}
	else if (number1 <= number3 && number3 <= number2) {
		std::cout << "\n === Ответ === | " << number1 << " | " << number3 << " | " << number2;
	}
	else if (number2 <= number3 && number3 <= number1) {
		std::cout << "\n === Ответ === | " << number2 << " | " << number3 << " | " << number1;
	}
	// Условия для записи трёх чисел в возрастающем порядке

		return 0; // Вывод результата
}
