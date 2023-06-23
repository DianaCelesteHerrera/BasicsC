//Programa para entender las operaciones 
#include <iostream>

using namespace std;
int main(){
	//variables asignacion 
	int a =5 , b=10, c=15 , d=20 ;
	bool respuesta;
	int edad;
	
	//operadores logicos 
	respuesta = (b>a);
	
	//bucles if 
	if(respuesta = 1){
		cout<<"su respuesta es cierta \n";
	}else{
		cout<<"no es verdadero \n";
	}
	
	
	/*
	Ejercicio: quieres entrar a un discoteca pero se requiere verificar tu edad
	Para resolver el problema vamos a usar condicionales\n 
	*/
	cout<<"\n---------------------------------------------------------------\n";
	cout<<"EJERCICIO: \n";
	cout<<"Ingrese la edad que tienes: ";
	cin>>edad;
	
	if(edad<18){
		cout<<"\nNo puedes entrar a la discoteca\n";
	}else{
		cout<<"\nSi puedes entrar a la discoteca\n";
	}

return 0;
}
