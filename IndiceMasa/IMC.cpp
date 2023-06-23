//programa que calcula el indice de masa coorporal o IMC
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	//variables inicializadas
	float peso = 0;
	float altura = 0;
	float resultado = 0;
	
	//solicitando informacion 
	cout<<"Bienvenido a la calculadora de Indice de Masa Coorporal\n";
	cout<<"Ingrese su peso en Kilogramos: ";
	cin>>peso;
	
	//solicitando altura 
    cout<<"Ingrese su altura en metros: ";
    cin>>altura;
	
	//operaciones
	resultado = peso / pow(altura,2); //incluyendo liberia math
	
	//resultado 
	cout<<"El calculo de su indice de masa coorporal es:\n";
	cout<<"Su IMC es:" <<resultado;
	return 0;
}
