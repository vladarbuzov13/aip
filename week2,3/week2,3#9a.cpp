Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
a. Длина (метры, версты, километры)


#include <iostream>
using namespace std;

float mnozhitel;
float result; // ðåçóëüòàò ðàñ÷¸òà
int choice; // îòâå÷àåò çà âûáîð ïîçèöèè ôîðìàòà ïåðåâîäà

void metrVkilometr(float mnozhitel);
void kilometrVMetr(float mnozhitel);
void metrVversta(float mnozhitel);
void verstaVmetr(float mnozhitel);
void kilometrVversta(float mnozhitel);
void verstaVkilometr(float mnozhitel);

//íàïèñàòü êîíâåðòåð âåëè÷èí ñ âûáîðîì ôîðìàòà âûâîäà

int main()
{
	setlocale(LC_ALL, "Russian"); // âêëþ÷èë ðóññêèé ÿçûê(ëîêàëèçàöèÿ)

	cout << " Ââåäèòå íîìåð æåëàåìîãî ïåðåâîäà: " << endl <<
			"1.Ìåòð-êèëîìåòð" << endl << "2.Êèëîìåòð-ìåòð " << endl << "3.Ìåòð-â¸ðñòû" << endl <<
			"4.Âåðñòû-ìåòð " << endl << "5.Êèëîìåòð-âåðñòû" << endl << "6.Âåðñòû-êèëîìåòðû" << endl;

	cin >> choice;
	cout << " Êîëëè÷åñòâî = ";
	cin >> mnozhitel;

	if (choice == 1) // âûçîâ ôóíêöèé ñ ðàñ÷¸òîì
	{

		metrVkilometr(mnozhitel);
		cout << result;

	}
	if (choice == 2)
	{

		kilometrVMetr(mnozhitel);
		cout << result;

	}
	if (choice == 3)
	{

		metrVversta(mnozhitel);
		cout << result;

	}
	if (choice == 4)
	{

		verstaVmetr(mnozhitel);
		cout << result;

	}
	if (choice == 5)
	{

		kilometrVversta(mnozhitel);
		cout << result;

	}
	if (choice == 6)
	{

		verstaVkilometr(mnozhitel);
		cout << result;

	}
	

	return 0;
}

void metrVkilometr(float mnozhitel) //ðåàëèçàöèÿ ðàñ÷¸òîâ
{

	result = mnozhitel / 1000;

}

void kilometrVMetr(float mnozhitel)
{

	result = mnozhitel * 1000;

}

void metrVversta(float mnozhitel)
{

	result = mnozhitel / 1067;

}

void verstaVmetr(float mnozhitel)
{

	result = mnozhitel * 1067;

}

void kilometrVversta(float mnozhitel)
{

	result = mnozhitel * 1.067;

}

void verstaVkilometr(float mnozhitel)
{

	result = mnozhitel / 1.067 ;

}
