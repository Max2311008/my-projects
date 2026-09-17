#include <iostream> // Подключаем заголовочный файл
#включить <Windows.h>
main int() { // Объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 2, 4, 5 строки обрабатывают кириллицу
	int catet1; // Создаём переменную
 std::cout << "Введите catet1: ";
 std::cin >> catet1;
	//Вводим переменную catet1 с помощью клавиатуры
	double catet2, hypotenuse; // Создаём переменные 
 std::cout << "Введите catet2: ";
 std::cin >> catet2;
	if (std::cin.fail() || catet1 < 0 || catet2 < 0) {
 std::cerr << "Ошибка, количество киллометров должно быть число больше нуля";
		 // Условие что все числа дожны быть положительными
	}
	else {
		//Вводим переменную catet2 с помощью клавиатуры
 hypotenuse = sqrt((catet1 * catet1 + catet2 * catet2));// Вычисляем гипотенузу
 std::cout << "Гипотенуза = " << hypotenuse << std::endl;// Выводим результат
		0 return;
	}
}
