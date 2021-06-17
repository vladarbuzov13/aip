#include <iostream>  //#6,1
#include <complex>

using namespace std;

struct number
{
	float a, b;
};

number one;

int main()
{
	setlocale(LC_ALL, "Russian");

	printf("ведите 2 числа ");
	cin >> one.a >> one.b;

	complex< double > z(one.a, one.b);

	double rho = abs(z); // Модуль комплексного числа
	double phi = arg(z); // Аргумент комплексного числа

	// Тригонометрическая форма комплексного числа:
	std::cout << "Z=" << rho << "*(cos(" << phi << ") + i*sin(" << phi << "))" << std::endl;


	return 0;
}