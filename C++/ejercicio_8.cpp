/* Un vendedor recibe un sueldo base mas un 10% extra por comisión de sus ventas,
el vendedor desea saber cuanto dinero obtendrá por concepto de comisiones por las tres ventas que realiza en el mes
y el total que recibirá en el mes tomando en cuenta su sueldo base y comisiones.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int precio = 20;
	int articulosaVender;
	double venta;
	
	cout << "Introduzca la cantidad de articulos a vender" << endl;
	cin >> articulosaVender;
	
	for(int i = 0; i < articulosaVender; i++){
		venta = precio * 0.10; 
	}
	
	cout << venta;
	
	
	return 0;
}

