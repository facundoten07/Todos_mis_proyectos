#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	//Menu
	cout<<"Ingrese el primer numero: ";cin>>a;
	cout<<"Ingrese el segundo numero: ";cin>>b;
	cout<<"Menu de opciones"<<endl;
	cout<<"1: Suma"<<endl;
	cout<<"2: Resta"<<endl;
	cout<<"3: Multiplicacion"<<endl;
	cout<<"4: Division"<<endl;
	cout<<"5: Potencia"<<endl;
	cout<<"6: Resto de la division (%)"<<endl;
	cout<<"7: Determinar si son iguales o distintos"<<endl;
	cout<<"8: Determinar cual es mayor y cual es menor"<<endl;
	cout<<"9: Determinar si la suma de ambos numeros es par o impar"<<endl;
	//Pedir opcion
	cout<<"Ingrese una opcion: ";cin>>c;
	//Operacion segun opcion
	switch (c){
	case 1:
		cout<<"La suma de los numeros es: "<<a+b<<endl;
		break;
	case 2:
		cout<<"La resta de los numeros es: "<<a-b<<endl;
		break;
	case 3:
		cout<<"La multiplicacion de los numeros es: "<<a*b<<endl;
		break;
	case 4:
		cout<<"La division de los numeros es: "<<a/b<<endl;
		break;
	case 5:
		cout<<"La potencia de "<<a<<" elevado a la "<<b<<" es: "<<pow (a,b)<<endl;
		break;
	case 6:
		cout<<"El resto de la division es: "<<a%b<<endl;
		break;
	case 7:
		if (a == b){
			cout<<"Los numeros son iguales"<<endl;
		}else {
			cout<<"Los numeros son distintos"<<endl;
		}
		break;
	case 8:
		if (a > b){
			cout<<"El numero mas grandes es: "<<a<<" y el menor es: "<<b<<endl;
		}else if (a < b) {
			cout<<"El numero mas grande es: "<<b<<" y el menor es: "<<a<<endl;
		}else {
			cout<<"Ambos numeros son iguales"<<endl;
		}
		break;
	case 9:
		if ((a+b) % 2 == 0){
			cout<<"El resultado de la suma es par"<<endl;
		}else{
			cout<<"El resultado de la suma es impar"<<endl;
		}
		break;
	default: 
		cout<<"Opcion invalida";
		
	}
	return 0;
}
