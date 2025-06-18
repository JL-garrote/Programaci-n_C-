#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float notas[3];
	float media[3];
	
	float notaExamen;
	float mediaExamen;
	
	float notaTrabajoFinal;
	float mediaTrabajo;
	
	float notaFinal;
	
	cout << "Ingrese la calificaciones parciales" << endl;
	
	for(int i = 0; i < 3; i++){
		cin >> notas[i];
		media[i] = notas[i] * 0.55;
	}
	
	cout << "Ingrese la nota del examen" << endl;
	cin >> notaExamen;
	mediaExamen = notaExamen * 0.30;
	
	cout << "Ingrese la nota del trabajo final" << endl;
	cin >> notaTrabajoFinal;
	mediaTrabajo = notaTrabajoFinal * 0.15;
	
	for(int i = 0; i < 3; i++){
		notaFinal = media[i] + mediaExamen + mediaTrabajo;
	}
	
	cout << "La nota final es " << notaFinal << endl;
	
	return 0;
}

