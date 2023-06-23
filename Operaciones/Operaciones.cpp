//programa que muestra las operaciones simples en C++ ademas de la simplificacion que tienen las variables
#include <iostream>
using namespace std;

int main(){
	//ejemplo con dos numeros 
	int numero1 = 23;
	int numero2 = 445;
	
	//suma primer forma de realizarla
	int suma = numero1 + numero2;
	cout<<"Resultado de la suma";
	cout<<suma;
	cout<<"\n";
	
	//suma simplificada 
	cout<<numero1 + numero2;
	cout<<"\n";
	
	//suma + simplificada
	numero1+=numero2;
	cout<<"\n";
	
	//resta
	cout<<numero2 - numero1;
	cout<<"\n";
	
	//division 
	cout<<numero1 / numero2;
	cout<<"\n";
	
	//multiplicacion 
	cout<<numero1 * numero2;
	cout<<"\n";
	
	//residuo
	cout<<numero1 % numero2;
return 0;
}

