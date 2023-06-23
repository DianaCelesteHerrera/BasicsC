//Programa de menu comida rapida 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int menu;
  cout << "..................   Menu .........................\n" << endl;
  cout << "1) Enfrijoladas " << endl;
  cout << "2) Tacos dorados " << endl;
  cout << "3) Pozole \n" << endl;
  cout << "Seleccione su plato digitando el numero del menu :" << endl;
  cin >> menu;
  
  switch(menu)
    {
    case 1:
    cout << "..................  Seleccion .........................\n" << endl;
    cout << "Usted ha seleccionado Enfrijoladas" << endl;
    cout << "El plato viene con arroz y aguacate." <<endl;
    cout << "Precio: $70.000" <<endl;
    break;
      
    case 2:
    cout << "..................  Seleccion .........................\n" << endl;
	cout << "Usted ha seleccionado Tacos dorados: \n" << endl;
	cout << "El plato viene con arroz y aguacate." <<endl;
	cout << "Precio:  $120.000" <<endl;
    break;
      
    case 3:
    cout << "..................  Seleccion .........................\n" << endl;
	cout << "Usted ha seleccionado Pozole:  \n" <<endl;
	cout << "El plato viene con arroz, aguacate y alcaparras." <<endl;
	cout << "Precio:  $139.000" <<endl;
	break;
     
  
    default:
	cout << "Error no existe esa comida dentro del menu" << endl;
	break;
    }
   
system("pause");
return 0;
 
}

