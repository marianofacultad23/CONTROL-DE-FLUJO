#include<iostream>
using namespace std;

int main (){
/*

for (int i=1 ; i<=3 ; i++){

        for (int j =1 ; j<=10 ; j++){

            cout<< j<< " ";
        }
                cout << endl;
    }

*/
    int filas;
    int columnas;
    char simbolo;

    cout << "Fila: ";
    cin >> filas;

    cout << "Columna: ";
    cin >> columnas;

    cout << "Símbolo: ";
    cin >> simbolo;
    
for (int i=1 ; i<= filas ; i++){

        for (int j =1 ; j<=columnas ; j++){

            cout<< simbolo << " ";
        }
                cout << endl;
    }

    return 0;
}
