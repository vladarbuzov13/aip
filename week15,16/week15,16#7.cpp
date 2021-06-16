#include <iostream>
#include <cmath>
using namespace std;



const int r = 2;
const int c = 4;
int matr[r][c];
int ar[r];

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "Ââåäèòå ìàòðèöó ïî 4 ýëåìåíòà â 2 ñòðîêè: " << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> matr[i][j];
        }
    cout << endl;
    int max = matr[0][0];
    for (int i = 0; i < c; i++)
        if (max < matr[0][i])
            max = matr[0][i];

    int max2 = matr[1][0];
    for (int i = 0; i < c; i++)
        if (max2 < matr[1][i])
            max2 = matr[1][i];

    for (int i = 0; i < c; i++)
        if (max == matr[0][i] & matr[1][i] == max2)
            cout << "Óðàãàí áóäåò â " << i + 1 << " äåíü " << endl;
}