/*programa para entender la manipulacion de las variables estas constantes ya no se pueden cambiar*/
#include <iostream>

//declarando constantes 
#define PI 3.1416

using namespace std;

int main(){
	float altura = 1.70;
	//creamos una constante van en mayusculas 
	const float GRAVEDAD=9.8;
	cout<<GRAVEDAD;
    cout<<"\n"; 
	cout<<PI;
	cout<<"\n"; 

	return 0;
}
