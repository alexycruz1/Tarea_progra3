#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int menu();
int PowerDigitSum(int, int);
int AmicableNumbers(int);

int main(int argc, char*argv[]){
	int opcion = menu();


	if (opcion == 1){
		int base, expo;
		cout << endl;

		cout << "Ingrese una base: ";
		cin >> base;

		cout << "Ingrese una potencia: ";
		cin >> expo;
		cout << endl;

		int resultado = PowerDigitSum(base, expo);

		cout << "El resultado del exponencial es: " << pow(base, expo) << endl;
		cout << "La suma de los digitos es: " << resultado << endl;

	}else if (opcion == 2){
		int limit = 10000, CheckLimit = 10000, resp1, resp2;
		int DivisorsSum = AmicableNumbers(limit);
		cout << "La suma de los divisores de 10000 es: " << DivisorsSum << endl;
		resp1 = DivisorsSum;

		limit = DivisorsSum;
		DivisorsSum = AmicableNumbers(limit);
		cout << "La suma de los divisores de " << limit << " es: " << DivisorsSum << endl;
		resp2 = DivisorsSum;

		if (CheckLimit == resp2){
			cout << resp1 << " y " << resp2 << " son numeros amigables" << endl;
		}else{
			cout << resp1 << " y " << resp2 << " no son numeros amigables" << endl;
		}

	}else if (opcion == 3){
		cout << "AQUI VA EL EJERCICIO 357";
	}

	return 0;
}

int menu(){
	int opcion;

	cout << "Programa #1 (16)" << endl
		<< "Porgrama #2 (21)" << endl
		<< "Programa #3 (357)" << endl
		<< "Ingrese una opcion: ";
	cin >> opcion; 

	return opcion;
}

int PowerDigitSum(int base, int expo){//no esta terminado
	int exponencial = pow(base, expo);
	int aumentar = 1;
	int resultado = 0;
	int temp = 0;
	 
	for (int i = 0; i < aumentar; i++){
		if (exponencial/10 != 0){
			aumentar++;
			resultado += exponencial%10; 
			exponencial = exponencial/10;
		}else if (exponencial/10 == 0){
			resultado += exponencial;
		}
	}
	return resultado;
}

int AmicableNumbers(int limit){
	int DivisorsSum = 0;

	for (int i = 1; i < limit/2+1; i++){
		if (limit % i == 0){
			DivisorsSum += i;
		}else{

		}
	}

	return DivisorsSum;
}


