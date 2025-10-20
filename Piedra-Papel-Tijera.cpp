#include<iostream>
#include<ctime>
using namespace std;

char eleccionUsuario();
char eleccionComputadora();
void mostrarEleccion(char eleccion);
void elegirGanador(char jugador, char computadora);




int main (){

    char jugador ;
    char computadora ; 
    jugador = eleccionUsuario() ;
    cout<< "Jugador: ";
    mostrarEleccion( jugador);
    computadora = eleccionComputadora();
    cout<< "Computadora: ";
    mostrarEleccion( computadora);
    cout<< "--------------------------"<< endl;
    elegirGanador(jugador,computadora);
    cout<< "****************************"<< endl;
    return 0;
}





char eleccionUsuario(){

char jugador ;
cout << "****************************" << endl;
cout << "Roca-Papel-Tijera | Jugador " << endl;
cout << "****************************" << endl;


do{
cout << "r : para Roca" << endl ;
cout << "p : para Papel" << endl ;
cout << "t : para Tijera" << endl ;
cout << "Elegir uno: " << endl;
cin >> jugador; 
cout << "--------------------------" << endl;
}while(jugador != 'r'  && jugador != 'p' && jugador != 't');


return jugador;

}

char eleccionComputadora(){


    srand(time(0));
    int num = rand () % 3 + 1 ;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
      case 3:
        return 't';
     }



    return 0;

}
void mostrarEleccion(char eleccion){

    switch (eleccion)
    {
    case 'r': 
        cout << "Roca"<< endl;
        break;
    case 'p': 
        cout << "Papel"<< endl;
        break;
    case 't': 
        cout << "Tijera"<< endl;
        break;
   
    }

}
void elegirGanador(char jugador, char computadora){
    switch (jugador){
        case 'r':
        if( computadora == 'r'){
            cout << "Empate " << endl;
           }
         else if (computadora == 'p'){
            cout << "Perdiste " << endl;
           }
        else {
            cout << "Ganaste " << endl;
         }
         break;
        case 'p':
        if( computadora == 'r'){
            cout << "Ganaste " << endl;
           }
         else if (computadora == 'p'){
            cout << "Empate " << endl;
           }
        else {
            cout << "Perdiste " << endl;
         }
         break;
        case 't':
        if( computadora == 'r'){
            cout << "Perdiste " << endl;
           }
         else if (computadora == 'p'){
            cout << "Ganaste " << endl;
           }
        else {
            cout << "Empate " << endl;
         }
         break;


    }

}



//GRACIAS SINERGIA//