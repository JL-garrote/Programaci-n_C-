#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int largo;
	int ancho;
	
	cout << "Introduzca el largo del rectangulo" << endl;
	cin >> largo;
	
	cout << "Introduzca el ancho del rectangulo" << endl;
	cin >> ancho;
	
	int perimetro = 2 * largo + ancho;
	int area = largo * ancho;
	
	cout << "El perimetro es ";
	cout << perimetro << endl;
	
	cout << "El area es ";
	cout << area << endl;
	
	return 0;
}

