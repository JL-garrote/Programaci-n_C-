#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float gradosF;
	float gradosC;
	
	cout << "Introduzca la temperatura" << endl;
	
	cin >> gradosF;
	
	gradosC = (gradosF -32) * 5/9;
	
	cout << "La conversion a grados Celsius es " << gradosC << endl;
	return 0;
	
}

