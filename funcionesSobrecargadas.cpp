#include<iostream>
using namespace std;

void  hornearPizza();
void  hornearPizza(string ingrediente1);
void  hornearPizza(string ingrediente1, string ingrediente2);

int main (){

   // string ingrediente1 = "Muzzarela"   ;
    hornearPizza("Muzzarella", "Peperoni");

    return 0;
}

void  hornearPizza(){

    cout<< "Aqui esta tu Pizza!!!"<< endl;

}
void  hornearPizza(string ingrediente1){
    cout <<  "Aqui esta tu Pizza de "<< ingrediente1 <<endl;

}
void  hornearPizza(string ingrediente1, string ingrediente2){
    cout <<  "Aqui esta tu Pizza de "<< ingrediente1 << " y "<< ingrediente2 <<endl;

}