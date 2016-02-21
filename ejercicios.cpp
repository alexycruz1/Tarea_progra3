#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int menu();
int PowerDigitSum(int, int);
int AmicableNumbers(int);
void triangulo_pascal(int, int**);
void imprimir_matriz(int**,int);

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
	}else if(opcion == 4){
		int filas;
		cout<< "Ingrese la cantidad de lineas del triangulo: ";
		cin>> filas;
		int** matriz = new int*[filas];
		for(int i=0; i<filas; i++){
			matriz[i]= new int[filas];
		}
		for(int i=0; i<filas;i++){
			for(int j=0; j<filas;j++){
				matriz[i][j]=0;
			}
		}
		
		triangulo_pascal(filas,matriz);
		imprimir_matriz(matriz,filas);	
		for (int i = 0; i < filas; i++){
			delete[] matriz[i];
		}

		delete[] matriz;

	}

	return 0;
}
void imprimir_matriz(int** matriz,int filas){
	for(int i=0; i<filas; i++){
		for(int j=filas-1; j>=0; j--){
			if(matriz[i][j])
				cout<<matriz[i][j]<<" ";
			else
				cout<< " ";
		}
		cout<< endl;
	}


}
void triangulo_pascal(int filas, int** matriz){	
	matriz[0][0]=1;
	matriz[1][0]=1;
	matriz[1][1]=1;
	int cont;
	for(int i=2; i<filas; i++){
		cont =0;
		for(int j=0; j<filas;j++){
			if(j==0){
				matriz[i][j]=1;	
			}else{
				if(cont < i){
					matriz[i][j]= matriz[i-1][j-1]+ matriz[i-1][j];
					cont++;
				}	
			}
			
		}
	}


}
int menu(){
	int opcion;

	cout << "1-Programa #1 (16)" << endl
		<< "2-Porgrama #2 (21)" << endl
		<< "3-Programa #3 (357)" << endl
		<< "4-Triangulo de Pascal"<<endl
		<< "5-Binomio elevado a la n"<<endl
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


