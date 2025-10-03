#include<iostream>
using namespace std;

int main (){
    int numero;
        do{
            cout << "Ingrese numero positivo ";
            cin >> numero;

        }while (numero < 0) ;
            cout << "Su numero positivo es: " << numero;

    return 0;
}