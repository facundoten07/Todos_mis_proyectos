#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int vector [20],n;
	cout<<"Ingrese cantidad de elementos: ";
	cin>>n;
	for (int i = 0; i < n; i ++){
		cout<<"Ingrese elemento: ";
		cin>>vector[i];
	}
	//Recorrido de elementos
	for (int i = 0; i < n; i ++){
		cout<<vector [i]<<" - ";
	}
	//Filtro de numeros enteros
	for (int i = 0;i < n; i ++){
		if (vector[i]<0){
			cout<<vector[i]<<" - ";
		}
	}
	return 0;
}
