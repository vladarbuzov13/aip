/* 
Напишите  программу,  которая  принимает  от  пользователя  координаты  точки  и 
определяет, попала ли точка в заштрихованную область. */

#include <iostream>
#include "fstream"

using namespace std;

struct point {
    float x, y;
};

const float r = 1;

void area(point A);

int main()
{
    setlocale(LC_ALL, "Russian");
    point pA;

    cin >> pA.x >> pA.y;
    
    area(pA);
}

void area(point A) {

    ofstream f;
    f.open("Task_9.txt");
    
    float rc = sqrt(A.x * A.x + A.y * A.y);

    bool area1 = (rc < r) && (A.y > A.x) && (A.x > 0);
    bool area2 = (rc < r) && (A.y > -A.x) && (A.x < 0);

    f << "Координата x: " << A.x << endl;
    f << "Координата y: " << A.y << endl;

    if (area1 || area2)
        f << "Да, точка попадает в заштрихованную область.";
    else
        f << "Нет, точка не попадает в заштрихованную область.";

    f.close();
}