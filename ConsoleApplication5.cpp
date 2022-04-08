#include <iostream>
#include <string>
using namespace std;


int main()
{
	string cad;
	string resultado;
	int i = 0;
	cout << "Ingrese una cadena: ";
	cin >> cad;

	for (i = cad.size() - 1; i >= 0; i--) { //Iniciamos con la cadena desde el final
		resultado += cad[i]; 
	}
	cout << endl;
	cout <<"La cadena invertida es: "<< resultado << endl; //Imprimira la cadena al revez

	if (cad == resultado) {  //Compara las 2 cadenas
		cout <<"\nLa cadena es PALINDROMA"<< endl;
	}
	else {
		cout << "\nLa cadena NO es PALINDROMA" << endl;
	}

}
