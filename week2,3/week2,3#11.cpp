Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3. */

#include <iostream>
#include "fstream"

using namespace std;

struct number {
	float a;
};

float b, s;

float biggest(number x, number y, number z);

float smallest(number x, number y, number z);

int main()
{	
	setlocale(LC_ALL, "Russian");
	ofstream f;
	f.open("Task_6.txt");

	number nx, ny, nz;

	cin >> nx.a >> ny.a >> nz.a;
	
	f << "Первое число = " << nx.a << endl;
	f << "Второе число = " << ny.a << endl;
	f << "Третье число = " << nz.a << endl;
	f << "Отсюда biggest + 5 = " << biggest(nx, ny, nz) << endl;
	f << "Отсюда smallest - 3 = " << smallest(nx, ny, nz) << endl;

	f.close();
}

float biggest(number x, number y, number z) {


	if ((x.a > y.a) && (x.a > z.a)) {
		b = x.a + 5;
	} else {
		if ((y.a > x.a) && (y.a > z.a)) {
			b = y.a + 5;
		} else {
			if ((z.a > x.a) && (z.a > y.a)) {
				b = z.a + 5;
			}
		}
	}
	return (b);
}

float smallest(number x, number y, number z) {

	if ((x.a < y.a) && (x.a < z.a)) {
		s = x.a - 3;
	} else { 
		if ((y.a < x.a) && (y.a < z.a)) {
			s = y.a - 3;
		} else {
			if ((z.a < x.a) && (z.a < y.a)) {
				s = z.a - 3;
			}
		}
	}
	return (s);
}