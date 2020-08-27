#include <iostream>
#include <math.h>

using namespace std;

int main () {
    float catetoA,catetoB;
    double hipotenusa;

    cout << "ingrese el valor del cateto A";
    cin >> catetoA;
    cout << "ingrese el valor del cateto B";
    cin >> catetoB;

    hipotenusa = ( pow(catetoB,2) + pow(catetoA,2) );

    hipotenusa = sqrt(hipotenusa);

    cout << "La hipotenisa es : " << hipotenusa;
}