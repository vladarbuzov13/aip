#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {

	ofstream file;

	struct Point {

		float y, x;

	};

	Point A;

	cout << "Imput x,y:";
	cin >> A.x >> A.y;

	if ((A.y < sin(A.x)) and (A.y < 0.5)) {

		file.open("file.txt");
		file << "Da, popadaet";
		file.close();

		cout << "Da, popadaet";

	}

	else {

		file.open("file.txt");
		file << "Net, ne popadaet";
		file.close();

		cout << "Net, ne popadaet";


	}

	return(0);
}