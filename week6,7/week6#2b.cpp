// Напишите программу, которая принимает от пользователя координаты точки 
// и определяет, попала ли точка в заштрихованную область
// 2-В

#include <iostream>
#include <math.h>


int main()
{
    float x, y;
    std::cout << "Enter coordinate (x) then (y): " << std::endl;
    std::cin >> x >> y;

    if ((1 > (x * x + (y - 1) * (y - 1))) and (y < 1 - x * x))
        std::cout << "Da, to4ka popadaet";
    else
        std::cout << "Net, to4ka ne popadaet";

    std::getchar();
    std::getchar();

    return 0;
}