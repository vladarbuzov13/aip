/* 
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
*/

#include <iostream>
#include "fstream"

using namespace std;

void stairs(int H);
float H;

int main()
{    
    ofstream inOut;
    inOut.open("Task_11.txt");

    stairs(H);
     
    inOut << endl;

    inOut.close();
}

void stairs(int H){

    ofstream inOut;
    inOut.open("Task_11.txt");

    cin >> H;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < i; j++)
            inOut << 0;
            inOut << endl;
    } 

    inOut.close();
}