#include<iostream>
#include<ctime>
using namespace std;
// una FUNCIÓN es un bloque de código reutilizable ;
void felizCumpleanios(string nombre, int edad);


int main (){

        string nombre = " JUANCHO";
        int edad = 63;
         felizCumpleanios(nombre,edad);
         felizCumpleanios(nombre, edad );
         felizCumpleanios(nombre, edad);


    return 0;
}

void felizCumpleanios(string nombre, int edad){

    cout << " QUE LOS CUMPLAS FELIZ! "<<endl ;
    cout << " QUE LOS CUMPLAS FELIZ! " <<endl ;
    cout << " QUE LOS CUMPLAS PAPI GUAPO"<< nombre << " !!! " <<endl ;
    cout << " QUE LOS CUMPLAS FELICES "  <<edad << " ANIOS !!!"<<endl <<endl ;
}