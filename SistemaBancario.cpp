#include<iostream>
#include<iomanip>
#include <limits>
using namespace std;



void mostrarSaldo(double saldo); 
double deposito ();
double retirar (double saldo);


int main (){

    double saldo = 123; 
    int opc = 0; 


   cout << "########SISTEMA BANCARIO########"<< endl;
   do{
    cout << "********************************"<<endl;
    cout << "Ingrese una opcion "<< endl;
    cout << "********************************"<<endl;

    cout << "1. Mostrar Saldo " << endl;
    cout << "2. Ingresar Dinero " << endl;
    cout << "3. Retirar Dinero " << endl;
    cout << "4. Salir " << endl;
    cout << "********************************"<<endl;
    cin >> opc  ;


    if(!cin >> opc){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits < std:: streamsize >::max(), endl );
       std::cout << " Entrada no valida. Intente nuevamente" <<endl ;
        continue;
    }

   

    switch(opc){
        case 1 :
        mostrarSaldo(saldo);
        break;
        case 2 : 
        saldo += deposito();
         mostrarSaldo(saldo);
        break;
        case 3 :
        saldo -= retirar(saldo);
         mostrarSaldo(saldo);
        break;
        case 4 :
        cout << "Gracias por su visita. " << endl;
        break;
        default:
        cout << "Numero no válido.Ingrese nuevamente. " << endl;
    }

   }while(opc != 4);




   cout << "################################"<< endl; 
    return 0;
}



void mostrarSaldo(double saldo){
cout << "-----------------------------------"<< endl;
cout << "#####Su Balance es $" << setprecision(2) << fixed << saldo << "#####" << endl; 

}
double deposito (){
    double monto = 0;
    cout << "Cual es el monto que desea ingresar? " << endl ;
    cin >> monto;

    if (monto>0){
        return monto;
    } else { return 0; }
    
}
double retirar (double saldo){
    double monto = 0;
    cout << "Cual es el monto que desea retirar? " << endl;
    cin >> monto;
 if (monto>saldo){
        
        cout << "Saldo Insuficiente "<< endl; 
        { return 0; }
    } else if (monto<0) { 
        cout<< " Esa no es una cantidad válida";
        return 0; }
        else {
               return monto; 
        }
     
        


return monto;

}


//GRACIAS SINERGIA//
