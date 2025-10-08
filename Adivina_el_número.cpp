#include<iostream>
#include <ctime> 
using namespace std;

int main (){


    int num;
    int adivinar;
    int intentos = 0; 

    srand(time(NULL));

    num = rand() % 100 + 1 ;

    cout << "----------Adivina el numero---------- "<< endl;

    do {

        cout << "Ingrese un numero del 1 al 100 " << endl;
        cin >> adivinar ;
        intentos++ ;

        if(adivinar > num){
            cout << " mas bajo! "<< endl;
        }
        else if (adivinar < num ){
            cout << " mas alto! " << endl ;
        }
        else {

            cout << " CORRECTO!!! "<< endl << " INTENTOS # " << intentos;
        }


    }while (num != adivinar);


    return 0;
} 