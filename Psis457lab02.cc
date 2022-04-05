#include <iostream>
using  namespace std;

int main(){
    
    int a;
	do {
		cout << "Nombre y Apellido : Julio Cesar Ortega Albarado" << endl;
		cout << "Nacido en : Santa Cruz Warnes" << endl;
		cout << "Estado Civil : Soltero" << endl;
		cout << "Profecion / Ocupacion : Estudiante" << endl;
		cout << "Domicilio : Pasaje Tomina s/n, Chuquisaca-Bolivia" << endl;
		cout << "Estudio : Colegio Nacional Mixto 3 de abril, Camargo-provincia nor cinti de Chuquisaca" << endl;
		cout << "Carrera : Ing. de Sistemas" << endl;
		// PRESIONE UN NUMERO PARA VOLVER A IMPRIMIR Y 0 PARA SALIR
		cin >> a;
	} while (a!=0);
    return 0;
}