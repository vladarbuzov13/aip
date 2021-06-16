/* Задание 4.
Вычислите значение выражения: |x| + x^5 , если x=−2. Ответ: -30*/

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

float x = -2;
float sum;

float summa(float a);

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream f;
    f.open("Task_4.txt");

    f << "x = " << x << endl;
    f << "Вычисленная сумма = " << summa(x);

    f.close();
}

float summa(float x) {
    sum = fabs(x) + pow(x, 5);
    return (sum);
}