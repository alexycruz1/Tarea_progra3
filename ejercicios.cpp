#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int menu();

int main(int argc, char*argv[]){

	if (menu() == 1){
		cout << "prueba1";
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


