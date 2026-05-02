#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char o;
	int a,b;
	cout<<"Suma"<<endl;
	cout<<"Resta"<<endl;
	cout<<"Multiplicacion"<<endl;
	cout<<"Division"<<endl;
	cout<<"Ingrese una letra: ";cin>>o;
	cout<<"Ingrese el primer numero: ";cin>>a;
	cout<<"Ingrese el segundo numero: ";cin>>b;
	switch (o){
	case 's':
	case 'S':
		cout<<"La suma de los numeros es: "<<a+b<<endl;
		break;
	case 'R':
	case 'r':
		cout<<"La resta de los numeros es: "<<a-b<<endl;
		break;
	case 'M':
	case 'm': 
		cout<<"La multiplicacion de los numeros es: "<<a*b<<endl;
		break;
	case 'd':
	case 'D':
		cout<<"La division de los numeros es: "<<a/b<<endl;
		break;
	default:
		cout<<"La letra ingresada no es valida"<<endl;
	}
	return 0;
}

