#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <limits>
#include <ctime> // Библиотека для time()
#include <cstdlib> // библиотека для srand() rand()
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int count;
	int sum;
	count = 0;// Создание переменной для посчёта количества чисел
	sum = 0; // Создание переменной для посчёта суммы чисел
	const int ROWS = 5; //Создание строк
	const int COLS = 5; // Создание столбцов
	int matrix[ROWS][COLS]; //Создание матрицы
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	std::cout << "Введите элементы матрицы " << ROWS << "x" << COLS << ":" << std::endl;
	for (int i = 0; i < ROWS;i++) {
		for (int j = 0;j < COLS;j++) {
			matrix[i][j] = 1 + std::rand() % 21;
			std::cout << std::setw(5) << matrix[i][j];
		}
		std::cout << '\n';
	}
	std::cout << std::setw(12) << "\nМатрица\n";
	for (int i = 0; i < ROWS;i++) {
		for (int j = 0;j < COLS;j++) {
			std::cout << std::setw(5) << matrix[i][j];
			if (matrix[i][j] % 3 == 0) { //Проверка элементов матрицы на кратность 3
				count += 1;
				sum += matrix[i][j];
			}
		}
		std::cout << '\n';
	}
	std::cout << "\nОТВЕТ  " << sum << std::endl;

	return 0;
}
