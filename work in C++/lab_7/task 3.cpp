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
	const int N = 6; // Создание столбцов
	int matrix[N][N]; //Создание матрицы
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	std::cout << "Введите элементы матрицы " << N << "x" << N << ":" << std::endl;
	for (int i = 0; i < N;i++) {
		for (int j = 0;j < N;j++) {
			matrix[i][j] = 1 + std::rand() % 101 - 50;
			std::cout << std::setw(5) << matrix[i][j];
		}
		std::cout << '\n';
	}
	int row; // создание переменной через которую будет происходить удаление строки
	while (true) {
		std::cout << "\nВведите номер строки для удаления: ";
		if (std::cin >> row && row < N && row >= 0) {
			break;
		}
		std::cout << "ОШИБКА! нужно число от 0 до " << N - 1 << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	for (int i = row; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = matrix[i + 1][j];
		}
	}
	for (int j = 0; j < N; j++) { // Обнулили удалённую строку
		matrix[N - 1][j] = 0;
	}
	std::cout << std::setw(12) << "\nМатрица посде удаления строки\n";
	for (int i = 0; i < N;i++) {
		for (int j = 0;j < N;j++) {
			std::cout << std::setw(5) << matrix[i][j];
		}
		std::cout << '\n';
	}


	return 0;
}
