#include<iostream>
using namespace std;
#include <cmath>

/*void areaCuadrado(double longitud);

int main (){

 
    double longitud =  5.0;
    areaCuadrado(longitud);
    return 0;


}



void areaCuadrado(double longitud){

double area = longitud * longitud;

cout << "El Area es: " << area << " cm2 " << endl;


}*/




double areaCuadrado(double longitud);
double volumenCubo(double longitud);

int main (){

 
    double longitud =  5.0;
    double area = areaCuadrado(longitud);
    cout << "El Area es: " << area << " cm2 " << endl;
    double volumen = volumenCubo(longitud);
    cout << "EL Volumen es: " << volumen << " cm3 " << endl ;

    return 0;
    

}


/*

double areaCuadrado(double longitud){

double area = longitud * longitud;
return area;


} */

double areaCuadrado(double longitud){

return  longitud * longitud;
}


double volumenCubo(double longitud){

    
return  longitud * longitud * longitud ;

}

/*
double areaCuadrado(double longitud);
int main (){
double longitud = 6.8
double area = areaCuadrado(longitud);
cout << "El Area es: " << area << " cm2 " << endl;

}
double areaCuadrado(double longitud){
return longitud * longitud;

}

*/