#include<iostream>
#include<ctime>
using namespace std;

int main (){

srand(time (0));

int randNum = (rand() % 5) + 1 ;
switch(randNum){


    case 1 : cout << " Has salido Primero!!!"<<endl;
        break;
    case 2 : cout << " Has salido Segundo!!!"<<endl;
        break;
    case 3 : cout << " Has salido Tercero!!!"<<endl;
        break;
    case 4 : cout << " Has salido Cuarto!!!"<<endl;
        break;
    case 5 : cout << " Has salido Quinto!!!"<<endl;
        break;
    


    return 0;
}
}
