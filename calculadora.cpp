#include <iostream>
using namespace std ;
#include <cmath>


int main(){

char op;

double num1;
double num2;
double resultado;

 cout << "######### - CALCULADORA - #########" << endl;

 cout << "Ingrese el Numero #1: "<< endl;
 cin >> num1;

 cout << "Ingrese Operador (   +   -   *   /   )" << endl;
 cin >> op;
 
 cout << "Ingrese el Numero #2: "<< endl;
 cin >> num2;

switch(op){

case '+' :
resultado = (num1 + num2 );
cout << "El resultado es: " << resultado << endl;
break;
case '-' :
resultado = (num1 - num2 );
cout << "El resultado es: " << resultado << endl;
break;
case '*' :
resultado = (num1 * num2 );
cout << "El resultado es: " << resultado << endl;
break;
case '/' :
resultado = (num1 / num2 );
cout << "El resultado es: " << resultado << endl;
break;
default:
cout << "Error!" << endl;

}



 cout << "###################################" ;
    return 0;
}