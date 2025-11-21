#include<iostream>
using namespace std;

void cambio(string &x, string &y);


int main (){

string x = "Agua";
string y = "Cafe";


cambio(x,y);

cout << "x: "<< &x << endl ;
cout << "y: " << &y << endl ;


    return 0;

}

void cambio(string &x, string &y){
cout << "x: "<< &x << endl ;
cout << "y: " << &y << endl ;

/*string temp ;

temp = x ;
x = y ;
y = temp ;*/

}