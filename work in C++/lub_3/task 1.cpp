#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream> // Подключаем заголовочный файл
#include <Windows.h>
#include <cmath>
#include <iomanip> // библиотека для fixed и setprecision()
int main() { // объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 3,8,9 строки обрабатывают кириллицу
	double number; // создание переменной с плавающей точкой
	while (true) {
		std::cout << "Введите число: ";
		if (std::cin >> number) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
	if (number < 0) {
		std::cout << "\n === Ответ(модульный) до округления === " << fabs(number) << std::endl;
		std::cout << "\n === ОТВЕТ === " << std::fixed << std::setprecision(2) << fabs(number) << std::endl;
	}
	else {
		std::cout << "\n === Ответ до округления === " << number << std::endl;
		std::cout << "\n === ОТВЕТ === " << std::fixed << std::setprecision(2) << number << std::endl;
	}
	/*Условие при котором если число отрицательное,
	 то выводим модуль этого числа или само число */
	return 0; // Вывод результата
}
