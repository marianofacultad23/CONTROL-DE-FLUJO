#include <iostream>
using namespace std;

double areaCuadrado(double longitudA,double longitudB);
double volumenCubo(double longitudA, double longitudB, double longitudC );


int main (){
double longitudA;
double longitudB;
double longitudC;

cout<< "------------MEDIDAS AREAS Y VOLUMEN------------"<<endl;
cout << "Ingrese longitud A:" << endl ;
cin >> longitudA;
cout << "Ingrese longitud B:" << endl ;
cin >> longitudB;
cout << "Ingrese longitud C:" << endl ;
cin >> longitudC;
double area = areaCuadrado(longitudA,longitudB);
cout << "-----------------------------------------------"<<endl;
3
cout << "El Area es: " << area << " cm2 " << endl;
double volumen = volumenCubo(longitudA,longitudB,longitudC);

cout << "El Volumen es: " << volumen << " cm3 " << endl;
cout<< "################################################"<<endl;
}



double areaCuadrado(double longitudA,double longitudB){
return longitudA * longitudB ;

}



double volumenCubo(double longitudA, double longitudB, double longitudC ){
return longitudA * longitudB * longitudC ;

}
