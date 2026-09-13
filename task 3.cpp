#define NOMINMAX // Запретит Windows.h определять макросы min и max
#include <iostream> // Подключаем заголовочный файл
#include <Windows.h> 
#include <limits> //Объявляем главную функцию

int main() { //Объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 3, 7, 8 строки обрабатывают кириллицу
	int  v0 = 0; // Создание переменных с целыми числами
	double boost, time, speed, distance; // Создание переменных с цифрами с точкой
	std::cout << "Введите ускорение: "; // Вывод текста на экран
	std::cin >> boost; // Введение данных с клавиатуры
	std::cout << "Введите время: ";
	std::cin >> time;
	speed = v0 + (boost * time); // Применение формулы равноускоренного движения
	if (std::cin.fail() || boost < 0 || time < 0) {
		std::cerr << "Ошибка, числа должны быть больше нуля";// Условие что переменные должны быть числами больше нуля
		std::cin.clear(); // Сбрасывает все флаги
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// Убирает весь мусор до конца строки
	}
	else {
		distance = speed * time; // Применение формулы равномерного движения
		std::cout << "Скорость - " << speed << std::endl;
		std::cout << "Путь - " << distance << std::endl;
		// Вывод текста на экран + сброс данных
	}
	return 0; // Вывод результа

}

