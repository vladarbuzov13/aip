/*
  Робот-автомобиль описывается как структура с полями: скорость, длительность 
движения и номер. Напишите функцию для расчёта пройденного расстояния. 
*/

#include <iostream>
#include "fstream"

using namespace std;

struct parametr {
    float speed;
    float time;
    float number;
};

float distance(parametr Auto);

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream file;
    file.open("Task_20.txt");

    parametr pAuto;

    cin >> pAuto.speed >> pAuto.time;
    file << "Скорость автомобиля: " << pAuto.speed << endl;
    file << "Длительность движения автомобиля: " << pAuto.time << endl;

    file << "Пройденное расстояние: " << distance(pAuto) << endl;

    file.close();
}

float distance (parametr Auto) {
    return (Auto.speed * Auto.time);
}