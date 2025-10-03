#include<iostream>
using namespace std;


int main (){
string nombre;
while(nombre.empty()){
        cout << "Ingrese tu Nombre: ";
        getline(cin , nombre);



}
cout<< "Hola " << nombre; 

    return 0;
}