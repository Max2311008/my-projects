#include <iostream> //Подключаем заголовочный файл
#include <Windows.h>
#include <iomanip> // библиотека для fixed и setprecision()
int main() { //Объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 2, 5, 6 строки обрабатывают кириллицу
	int height; // Создание переменной
	double length, width; // Создание переменных с точкой, так как эти переменные могут иметь дробное значение
	double volume, squarefs;// Создание переменных с точкой, так как эти переменные могут иметь дробное значение
	std::cout << "Вычисление объёма параллелепипеда и площади поверхности" << std::endl;// Вывод текста на экран
	std::cout << "ДЛИНА ПАРАЛЛЕЛЕПИПЕДА = ";// Вывод текста на экран
	std::cin >> length;// Введение данных переменной с клавиатуры
	std::cout << "Число после округления = " << std::fixed << std::setprecision(2) << length << std::endl;
	// Округление числа до сотых
	std::cout << "ШИРИНА ПАРАЛЛЕЛЕПИПЕДА = ";// Вывод текста на экран
	std::cin >> width;// Введение данных переменной с клавиатуры
	std::cout << "Число после округления = " << std::fixed << std::setprecision(2) << width << std::endl;
	// Округление числа до сотых
	std::cout << "ВЫСОТА ПАРАЛЛЕЛЕПИПЕДА = ";// Вывод текста на экран
	std::cin >> height;// Введение данных переменной с клавиатуры
	if (std::cin.fail() || length < 0 || width < 0 || height < 0) {
		std::cerr << "ОШИБКА, числа в этих переменных должны быть положительными";
	} // Условие что переменные должны быть числами больше нуля
	else { // Иначе если условия не выполняется, то выводим продолжение кода
		volume = static_cast<double>(length * width * height);// явное приведение операндов к double
		squarefs = static_cast<double>(2 * (length * width + width * height + length * height));
	     // явное приведение операндов к double
		std::cout << "ОБЪЁМ ПАРАЛЛЕЛЕПИПЕДА = " << volume << std::endl;
		std::cout << "Результат выражения после округления = " << std::fixed << std::setprecision(2) << volume << std::endl;
		// Округление числа до сотых
		std::cout << "ПЛОЩАДЬ ПОЛНОЙ ПОВЕРХНОСТИ ПАРАЛЛЕЛЕПИПЕДА = " << squarefs << std::endl;
		std::cout << "Результат выражения после округления = " << std::fixed << std::setprecision(2) << squarefs << std::endl;
		// Округление числа до сотых
	}

   return 0; // Вывод результата
}
