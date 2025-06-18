#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	
	float cateto1;
	float cateto2;

	float suma;
	float hipotenusa;
	
	cout << "Introduzca los valores de los catetos" << endl;
	cin >> cateto1;
	cin >> cateto2;
	
	cateto1 = pow(cateto1, cateto1);
	
	cateto2 = pow(cateto2, cateto2);
	
	suma = cateto1 + cateto2;
	
	hipotenusa = sqrt(suma);
	
	cout << "La hipotenusa es ";
	cout << hipotenusa << endl;
	
	return 0;
}

