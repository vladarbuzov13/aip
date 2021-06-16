/*
В квадратной матрице найти сумму положительных элементов, лежащих на и выше
главной диагонали и расположенных в чётных столбцах. */

#include <iostream>
#include "fstream"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream f;
    f.open("Task_29.txt");

	int mat[5][5];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			mat[i][j] = rand() % 10 - 5;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			f << mat[i][j] << " ";
		f << endl;
	}

	f << endl;

	for (int i = 0; i < 5; i++)      //вывод диагональных значений на экран
	f << mat[i][i] << " ";

	f << endl;

	int S = 0;
	for (int i = 0; i < 5-1; i++)
		for (int j = i + 1; j < 5; j++) {
			if ((mat[i][j] > 0) && (j % 2 == 0)) {
				S += mat[i][j];
			}
		}

	for (int i = 0; i < 5; i++)
			if ((mat[i][i] > 0)&&(i % 2 == 0)) {
				S += mat[i][i];
			}
	
	f << S << endl;


    f.close();
}