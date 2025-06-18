#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float minutos;
	float conversion;
	
	cout << "Introduzca los minutos antes de la conversion" << endl;
	cin >> minutos;

	conversion = minutos /60;
	
	cout << "Despues de la conversion es " << conversion << " horas" << endl;
	
	return 0;
}

