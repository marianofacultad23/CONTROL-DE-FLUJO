#include <iostream>

using namespace std;

int main (){

    double temp;
    char op; 

    cout << "***** CONVERSION DE TEMPERATURA *****"<< endl;


    cout << "F/f= Farenheit "<< endl;
    cout << "C/c= Celsius "<< endl;
    cout << " A que unidad te gustaria convertir "<< endl;
    cin >> op;

    if(op == 'F' || op == 'f'){

        cout << "Ingrese la temperatura en Celsius "<<endl;
        cin >> temp;
        temp = (1.8 * temp) + 32;
        cout << "La temperatura es "<< temp << " Grados Farenheit " << endl;

}
else if (op == 'C' || op =='c'){
        cout << "Ingrese la temperatura en Farenheit "<< endl;
        cin >> temp;
        temp = ( temp-32) / 1.8 ;
        cout << "La temperatura es "<< temp << " grados Celsius " << endl;


}


else {
    cout<< "Ingrese solo C/c o F/f "<< endl;
}



    cout << "*************************************"<< endl;



    return 0;
}