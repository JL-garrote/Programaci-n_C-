#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	
	cout << "Introduzca los numeros" << endl;
	
	cin >> num1;
	cin >> num2;
	
	int suma = num1 + num2;
	int resta = num1 - num2;
	int multiplicacion = num1 * num2;
	float division = (float) num1 / num2;
	
	cout << "El resultado de la suma es " << suma << "\n" << "El resultado de la resta es " << resta << "\n" << "EL resultado de la multiplicacion es " << multiplicacion << "\n" << "El resultado de la division es " << division << endl;
		
		
	
	return 0;
}

