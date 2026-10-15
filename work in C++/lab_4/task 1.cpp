#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream>  // Подключаем заголовочный файл
#include <Windows.h>
int main() { // объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
		// 3,5,6 строки обрабатывают кириллицу
	int number;
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
	switch (number) {
	case 1:
		std::cout << "==== Север ====";
		break;
	case 2:
		std::cout << "==== Юг ====";
		break;
	case 3:
		std::cout << "==== Запад ====";
		break;
	case 4:
		std::cout << "==== Восток ====";
		break;
	default:
		std::cout << "НАПИШИ ЧИСЛО ОТ 1 ДО 4";
	}
	// Проверка переменной  number на несколько условий
	return 0; //Вывод результа
}

