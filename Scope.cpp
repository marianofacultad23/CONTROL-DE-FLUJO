#include<iostream>
using namespace std;

//Local Variable
//Global Variable

int miNumero = 3;
void mostrarNumero( );
int main (){

    int miNumero = 1;
    cout << ::miNumero << endl;
    mostrarNumero();
   
 return 0;
}

void mostrarNumero(){
    int miNumero = 2;
     cout << ::miNumero << endl;
}