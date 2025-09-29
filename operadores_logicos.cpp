#include <iostream>
using namespace std;

int main(){

// && = comprueba si dos condiciones son verdaderas;
// || = comprueba si alguna de dos  condiciones es verdadera;
// !  = invierte el estado logico de su operando;

/* int temp ;

cout << "Ingrese la temperatura " ;
cin >> temp ; 
*/
/*if (temp>= 0 && temp <=30) {
cout << "La temperatura es buena"<< endl;

}
else {
    cout << "La temperatura es extrema"<< endl;
}
*/


//-------------------------------------



/*if (temp<=0 || temp >= 30 )
{
    cout << "La temperatura es extrema"<< endl;
}
else{
cout << "La temperatura es buena"<< endl;
*/



//-------------------------------------

bool soleado = true;

if(!soleado){
cout << " Esta soleado afuera "<< endl;

}
else{
    cout << "Esta nublado afuera " << endl;
}


    return 0;

}