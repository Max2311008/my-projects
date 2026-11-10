#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <limits>
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int count;
	count = 0; // Создание переменной для посчёта количества чисел
	const int ROWS = 5; //Создание строк
	const int COLS = 3; // Создание столбцов
	int matrix[ROWS][COLS]; //Создание матрицы
	std::cout << "Введите элементы матрицы " << ROWS << "x" << COLS << ":" << std::endl;
	for (int i = 0; i < ROWS;i++) {
		for (int j = 0;j < COLS;j++) {
			std::cout << "matrix[" << i << "][" << j << "]= ";
			while (true) { //Ввод числе в int
				if (std::cin >> matrix[i][j]) {
						break;
				} //Условие повторного ввода данных при ошибке

				std::cout << "Ошибка! Введите число заново.\n";//Вывод текста на экран

				std::cin.clear();// сброс флага ошибки
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// очистка буфера от мусора
			
			}
		}
	}
	std::cout << std::setw(12) <<"\nМатрица\n";
	for (int i = 0; i < ROWS;i++) {
		for (int j = 0;j < COLS;j++) {
			std::cout << std::setw(5) << matrix[i][j];
			if (matrix[i][j] < 0) { //Проверка элементов матрицы на отрицательное число
				count += 1;
			}
		}
		std::cout << '\n';
	}
	std::cout <<"\nОТВЕТ  " << count << std::endl;
	
	return 0;
}
