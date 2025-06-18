#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1,num2,num3;
	int media;
	
	cout << "Introduzca los 3 numeros" << endl;
	
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	media = num1 + num2 + num3 /3;
	
	cout << "La media es " << media;
	
	return 0;
}

