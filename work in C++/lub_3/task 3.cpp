#define NOMINMAX // запретить Windows.h определять макросы min и max
#include <iostream> // Подключаем заголовочный файл
#include <Windows.h>
#include <iomanip> // библиотека для fixed и setprecision()
#include <string> // библиотека для значений строки
int main() { // объявляем главную функцию
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// 3,9,10 строки обрабатывают кириллицу

	double summa;
	std::string status;
	while (true) {
		std::cout << "Введите число: ";
		if (std::cin >> summa) {
			break;
		}
		// ввод числа с повтором ввода данных при ошибке
		std::cout << "ОШИБКА! Введите число заново.\n"; // ввод текста на экран
		std::cin.clear(); // сброс флага ошибки
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// очистка буфера от мусора
	}
		std::cout << "Введите статус клиента(обычный| VIP | сотрудник): ";
		std::cin >> status; // Ввод с клавиатуры
		double discout = 0; // Создание переменной скидки
		if (status == "обычный") {
			discout = 0;
		}
		else if (status == "VIP") {
			discout = 10;
		}
		else if (status == "сотрудник") {
			discout = 20;
		}
		else {
			std::cout << "\nСтатус не найден, скидки не будет\n";
		}
		if (summa > 5000) {
			discout += 5;
		}
		// Условия для обозначения скидок для статуса
		double otvet = summa - ((summa * discout) / 100);
		std::cout << "\n=== Результат ===\n";
		std::cout << "Сумма покупки:  " << std::fixed << std::setprecision(4) << summa << " руб.\n";
		std::cout << "Скидка на покупку:  " << discout << " %\n";
		std::cout << "Итоговая сумма:  " << std::fixed << std::setprecision(4) << otvet << " руб.\n";
		// Вывод на экран итоговую сумму с округлением после 4 знака
		return 0; // Вывод результата
	}



	
	
	


	
