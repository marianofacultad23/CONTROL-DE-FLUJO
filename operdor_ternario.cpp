#include <iostream>
using namespace std;



//Operador Ternario ?: es un reemplazo para usar la condicion if;
//condición ? expresión 1 : expresión 2;
int main(){

int calificacion = 95;

calificacion >=60 ? cout << "Aprobaste " : cout << "Desaprobaste" << endl;

//---------------------------------------------------------------------------------------------------";

int numero = 9;

// numero %  2 == 0 ?  cout << "Numero Par " : cout << " Numero Impar " << endl;
 numero % 2 ? cout << " Numero Impar " :  cout << "Numero Par " << endl;

//---------------------------------------------------------------------------------------------------";

bool hambriento = true ;

hambriento == true ? cout << "Tienes Hambre" : cout << "No Tienes Hambre" << endl;


//---------------------------------------------------------------------------------------------------";

    return 0;
}