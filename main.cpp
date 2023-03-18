#include <iostream>
using namespace std;

int num, factorial = 1 ;
int  n = 20, a, B= 0, c = 1;
int main() {
    cout << "--------------------------------------" << endl;
    std::cout << "Hola!" << std::endl;
    cout << "Porfavor ingresa el numero" << endl ;
    cin >> num;

    for (int x = 1; x <= num; x++)
        factorial = factorial * x;
    cout << "El factorial de " << num << " es " << factorial << endl;


    cout << "----------------------------------------" << endl;

    cout << "serie fibonacci" << endl;



    cout << B << c << endl ;

    for (int x = 3; x <= n; x++) {
        a = B + c ;
        B = c ;
        c = a;
        cout << a << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << "--Numeros Primos--" << endl;
    int numero2 , m = 2;
    bool band = true;
    cout << "ingresa el numero:" << endl;
    cin >> numero2;

    while (band && m < numero2){

        if (numero2 % m == 0)
            band = false;
        else
            m = m + 1;
    }
    if (band)
        cout << "el numero es primo" << endl;
    else
        cout << "el numero No es primo" << endl;

    cout << "--------------------------------------" << endl;
    int num3, so;
    cout  << "-numeros pares-" << endl;
    cout << "ingrese el numero" << endl;
    cin >> num3;
    if ( so%2  == 0){
        cout << "el numero es par "  <<  endl;
    }else {
        cout << "el numero es impar" << endl;
    }
    cout << "--------------------------------------" << endl;
    cout << "--Tablas de multiplicar--"<< endl;
    int multi, numero, i = 1 ;

    cout << "Ingrese el numero de la tabla que quieras saber" << endl ;
    cin >> numero ;
    do {
        multi = numero * i;
        cout << numero <<  "x" << i << "=" <<multi <<endl;
        i++;
    } while (i<=10);
    cout << "--------------------------------------" << endl;

    return 0;
}
