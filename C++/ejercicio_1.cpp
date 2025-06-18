#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string nombre;
	
	cout << "Introduzca su nombre" << endl;
	getline(cin,nombre);
	
	if(nombre != ""){
		cout << "hola " + nombre;
	}	
	return 0;
}

