#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    double promedio,calif1,calif2,calif3,parcial1,parcial2,parcial3;

    cout<<"Ingresa la calificacion del primer parcial ";
    cin>>calif1;

    cout<<"Ingresa la calificacion del segundo parcial ";
    cin>>calif2;

    cout<<"Ingresa la calificacion del tercer parcial ";
    cin>>calif3;

    parcial1 = calif1*0.15;
    parcial2 = calif2*0.45;
    parcial3 = calif3*0.40;

    promedio = parcial1 + parcial2 + parcial3;

    if(promedio >70){
        cout<<"Felicitaciones tu promedio fue de "<<promedio <<" aprobaste la materia \n";
    }else{ 
        cout<<"Lo sentimos mucho tu promedio fue de "<<promedio <<" NO aprobaste la materia \n";
    }
   
	system("pause");
	return 0;
    
}
