#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    cout << "menghitung luas permukaan balok" << endl;


    float  a, b, c, hasil;
    hasil = a * b / c;
    cout << "masukkan panjang:";
    cin >> a;
    cout << "masukkan lebar:";
    cin >> b;
    cout << "masukkan tinggi :";
    cin >> c;
    cout << " maka hasil LP = " << 2 * (a*b + a*c + b*c) ;



    return 0;
}
