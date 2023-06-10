

#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;
int main()
{
    cout << "/////////////////////////////////////////////////////////////\n";
    cout << "//                                                         //\n";
    cout << "// Elija una de las siguientes opciones de la calculadora  //\n";
    cout << "//                                                         //\n";
    cout << "/////////////////////////////////////////////////////////////\n\n";
    int eleccion;

    cout << " 1.Sumar  2.Restar  3.Multiplicar  4.Dividir  5.Sacar numero primo  6.Raiz cuadrada  7.Sacar resto\n";

    cin >> eleccion;

    switch (eleccion)
    {
    case 1: {
        system("cls");
        float num1;
        float num2;
        cout << "//////////////////////////////////////////\n";
        cout << "Has elegido la suma, introduce dos numeros\n";
        cin >> num1;
        cout << "Introduce el otro numero\n";
        cin >> num2;
        float sum = num1 + num2;
        cout << "El resultado de la suma es: " << sum << endl;
        break;
    }
    case 2: {
        system("cls");
        int nume1;
        int nume2;
        cout << "///////////////////////////////////////////\n";
        cout << "Has elegido la resta, introduce dos numeros\n";
        cin >> nume1;
        cout << "Introduce el otro numero\n";
        cin >> nume2;
        float rest = nume1 - nume2;
        cout << "El resultado de la resta es: " << rest << endl;
        break;
    }
    case 3: {
        system("cls");
        float numer1;
        float numer2;
        cout << "////////////////////////////////////////////////////\n";
        cout << "Has elegido la multiplicacion, introduce dos numeros\n";
        cin >> numer1;
        cout << "Introduce el otro numero\n";
        cin >> numer2;
        float mult = numer1 * numer2;
        cout << "El resultado de la resta es: " << mult << endl;
        break;
    }
    case 4: {
        system("cls");
        float nu1;
        float nu2;
        cout << "//////////////////////////////////////////////\n";
        cout << "Has elegido la division, introduce dos numeros\n";
        cin >> nu1;
        cout << "Introduce el otro numero\n";
        cin >> nu2;
        float div = nu1 / nu2;
        cout << "El resultado de la resta es: " << div << endl;
        break;
    }
    case 5: {
        system("cls");
        int numero;
        int c = 0;
        cout << "///////////////////\n";
        cout << "Introduce un numero\n";
        cin >> numero;
        for (int i = 1; i < numero / 2; i++) {
            if (numero % i == 0) {
                c++;
            }
        }
        if (c == 1) {
            cout << "Es un numero primo\n";
        }
        else {
            cout << "No es un numero primo\n";
        }
        break;
    }
    case 6: {
        system("cls");
        float nu1;
        cout << "/////////////////////////////////////////////////\n";
        cout << "Has elegido la raiz cuadrada, introduce el numero\n";
        cin >> nu1;
        float raiz = sqrt(nu1);
        cout << "El resultado de la raiz cuadrada es: " << raiz << endl;
        break;
    }
    case 7: {
        system("cls");
        int numero1;
        int numero2;
        cout << "/////////////////////////////////////////////////\n";
        cout << "Has elegido sacar el resto, introduce los numeros\n";
        cin >> numero1;
        cout << "Introduce el otro numero\n";
        cin >> numero2;
        float resto = numero1 % numero2;
        cout << "El resto es: " << resto << endl;
        break;
    }

    }
    if (eleccion > 7 or eleccion < 1) {

        cout << "Solo hay disponibles 7 opciones\n";
    }
    system("pause");
    return 0;

}