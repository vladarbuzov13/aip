Пользователь вводит три числа. Увеличьте первое число в два раза, второе число
уменьшите на 3, третье число возведите в квадрат и затем найдите сумму новых
трех чисел. 



#include <fstream>
#include <iostream>

//Ïîëüçîâàòåëü ââîäèò òðè ÷èñëà. Óâåëè÷üòå ïåðâîå ÷èñëî â äâà ðàçà, âòîðîå ÷èñëî óìåíüøèòå íà 3, òðåòüå ÷èñëî âîçâåäèòå â êâàäðàò è çàòåì íàéäèòå ñóììó íîâûõ òðåõ ÷èñåë. 


using namespace std;

float ch1, ch2, ch3, rez;

void ReadWriteNumbers();

int main()
{
	cout << "Vvedite 1 chislo "; cin >> ch1;
	cout << "Vvedite 2 chislo "; cin >> ch2;
	cout << "Vvedite 3 chislo "; cin >> ch3;
	ch1 = ch1 * 2;
	ch2 = ch2 - 3;
	ch3 = (ch3 * ch3);
	rez = (ch1 + ch2 + ch3);
	cout << "Rezultat: " << rez;

	ReadWriteNumbers();

	return 0;
}

void ReadWriteNumbers() {

	setlocale(LC_ALL, "Russian");

	float num1 = ch1;
	float num2 = ch2;
	float num3 = ch3;
	float num4 = rez;

	std::fstream f("text.txt", std::ios::out); // îòêðûâàåì äëÿ çàïèñè
	f << "1 ÷èñëî " << num1 << " \n2 ÷èñëî " << num2 << "\n3 ÷èñëî" << num3 << " \nÎòâåò " << num4;
	f.close(); // çàêðûâàåì ôàéë


	f.open("text.txt", std::ios::in); // îòêðûâàåì äëÿ ÷òåíèÿ
	f << "1 ÷èñëî " << num1 << " \n2 ÷èñëî " << num2 << "\n3 ÷èñëî" << num3 << " \nÎòâåò " << num4;
	f.close(); // çàêðûâàåì ôàéë

}
