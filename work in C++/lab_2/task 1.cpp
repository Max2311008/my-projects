#include <iostream> //Подключаем заголовочный файл
#include <Windows.h>
int main() { //Объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 2, 4, 5 строки обрабатывают кириллицу
	int kilometers, meters;//Создаём переменные
	std::cout << "Перевод км в м" << std::endl;
	std::cout << "Количество киллометров = ";
	//Выводим текст на экран
	std::cin >> kilometers;//Вводим переменную с клавиатуры
	if (std::cin.fail() || kilometers < 0) {
		std::cerr << "Ошибка, количество киллометров должно быть число больше нуля";
		// Условие при котором не может быть отрицательных числе при таких величинах
	}
	else{
 meters = kilometers * 1000;//Вычисляем количество метров
 std::cout << "Количество метров = ";
 std::cout << meters;//Выводим результат на экран
	}
	return 0;
}
