#include <iostream>
using namespace std;

int main () {

int edad ;
cout << "Ingrese tu edad: ";
cin >> edad;


if(edad >= 18){
cout << "Bienvenido al Sitio ";
}
else if (edad < 0 ){
    cout << "Error ";
}
else if (edad > 100 ){
    cout << "Demasiado Mayor para este sitio ";
}

else{
    cout << "Eres menor de edad ";
}


    return 0;
}