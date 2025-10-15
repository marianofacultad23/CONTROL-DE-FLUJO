#include<iostream>
using namespace std;

string concatenarCadena (string string1, string string2);

int main (){

    string nombre = "Mariano";
    string apellido = " Gomez de Oliveira";

    string  nombreCompleto = concatenarCadena (nombre, apellido);
    cout << "Hola " << nombreCompleto << "!!!!"<< endl;

    return 0;
}


string concatenarCadena (string string1, string string2){

return string1 + "" + string2;

}