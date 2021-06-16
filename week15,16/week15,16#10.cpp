Реализовать сложение, вычитание, умножение, транспонирование матриц 



#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;



const int r = 3;
const int c = 3;
int a[r][c];
int b[r][c];
int w[r][c];
int d[r][c];
int e[r][c];

void sum() 
{

    cout << "A+B: " << endl;
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            cout << "  " << a[i][j] + b[i][j];
        cout << endl;
    }
    cout << endl;

}

void umnozh() 
{

    cout << "A*B: " << endl;

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            w[i][j] = 0;
            for (int k = 0; k < r; k++)
                w[i][j] += a[i][k] * b[k][j];
            cout << "  " << w[i][j];
        }
        cout << endl;
    }
    cout << endl;

}

void minus()
{

    cout << "A-B: " << endl;

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            cout << "  " << a[i][j] - b[i][j];
        cout << endl;
    }
    cout << endl;

}

void trans_A() 
{

    cout << "trans A: " << endl;

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            d[i][j] = a[j][i];
    }

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
    cout << endl;

}

void trans_B() 
{

    cout << "trans B: " << endl;

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            e[i][j] = b[j][i];
    }

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            cout << e[i][j] << " ";
        cout << endl;
    }

}

int main() 
{

    cout << "Matrica A: " << endl;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) 
        {
            cin >> a[i][j];
        }
    cout << endl;

    cout << "Matrcica B: " << endl;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) 
        {
            cin >> b[i][j];
        }
    cout << endl;

    sum();
    minus();
    umnozh();
    trans_A();
    trans_B();

    return 0;

}
