#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int menu();
double PowerDigitSum(double, double);

int main(int argc, char*argv[]){

	if (menu() == 1){
		double base, expo;
		cout << endl;

		cout << "Ingrese una base: ";
		cin >> base;

		cout << "Ingrese una potencia: ";
		cin >> expo;
		cout << endl;

		PowerDigitSum(base, expo);

	}else if (menu() == 2){
		cout << "prueba2";
	}else if (menu() == 3){
		cout << "prueba3";
	}

	return 0;
}

int menu(){
	int opcion;

	cout << "Programa #1 (16)" << endl
		<< "Porgrama #2 (21)" << endl
		<< "Programa #3(357)" << endl
		<< "Ingrese una opcion: ";
	cin >> opcion; 

	return opcion;
}

double PowerDigitSum(double base, double expo){//no esta terminado
	double exponencial = pow(base, expo);

	cout << resultado;

	return resultado;
}


