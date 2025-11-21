#include<iostream>
using namespace std;

void incrementarValor(int x);
void incrementarReferencia(int &x);

int main (){

   int numero = 10 ;

   cout << "Valor Inicial: " << numero << endl;


   incrementarValor(numero);
   cout << "Despues de Incrementar Valor: " << numero << endl;
   incrementarReferencia(numero);
   cout << "Despues de Incrementar Referencia: " << numero << endl;

    return 0;
}

void incrementarValor(int x){
x = x + 1;
}
void incrementarReferencia(int &x){
x = x + 1;
}
