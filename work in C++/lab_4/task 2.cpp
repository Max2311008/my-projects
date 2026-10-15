#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream>  // Подключаем заголовочный файл
#include <Windows.h>
int main() { // объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
		// 3,5,6 строки обрабатывают кириллицу
	char symbol; // создание переменной со значением символа
	std::cout << "Введите символ "; // Вывод текста на экран
	std::cin >> symbol; // Ввод текста с клавиатуры
	switch (symbol) {
	case 'a': case'e': case'i':case'o': case'u':case'y':
	case 'A': case'E': case'I':case'O': case'U':case'Y':
		std::cout << "$=== Символ " << symbol << " - Гласная буква ===$";
		break; // Условие на гласную букву
	case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
	case 'j': case 'k': case 'l': case 'm': case 'n': case 'p':
	case 'q': case 'r': case 's': case 't': case 'v': case 'w':
	case 'x': case 'z':
		std::cout << "$=== Символ " << symbol << " - Согласная буква ===$";
		break; // Условие на согласную букву
	case '0': case '1': case '2': case '3': case '4': case '5':
	case '6': case '7': case '8': case '9':
		std::cout << "$=== Символ " << symbol << " - Цифра ===$";
		break; // Условие цифру
	default:
		std::cout << "$=== Служебный символ ===$";
		break; // Условие на другой символ
	}
		return 0; // Вывод результата
	}
