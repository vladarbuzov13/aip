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

	printf("������ 2 ����� ");
	cin >> one.a >> one.b;

	complex< double > z(one.a, one.b);

	double rho = abs(z); // ������ ������������ �����
	double phi = arg(z); // �������� ������������ �����

	// ������������������ ����� ������������ �����:
	std::cout << "Z=" << rho << "*(cos(" << phi << ") + i*sin(" << phi << "))" << std::endl;


	return 0;
}