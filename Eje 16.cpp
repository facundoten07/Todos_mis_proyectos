#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"Ingrese el valor del primer numero: ";cin>>a;
	cout<<"Ingrese el valor del segundo numero: ";cin>>b;
	cout<<"Ingrese el valor del tercer numero: ";cin>>c;
	if (a == b and b==c){
		cout<<"Los tres numeros son iguales "<<endl;
	}else if (a >= b and a >= c){
		if (a == b or a == c ){
			cout<<"Hay dos numeros mayores iguales: "<<a;
		}else {
			cout<<"El numero mayor es: "<<a<<endl;
		}
	}else if (b >= a and b >= c){
		if (b == a or b == c ){
			cout<<"Hay dos numeros mayores iguales: "<<b;
		}else {
			cout<<"El numero mayor es: "<<b<<endl;
		}
	}else {
		if (c == b and c == a ){
			cout<<"Hay dos numeros mayores iguales: "<<c;
		}else {
			cout<<"El numero mayor es: "<<c<<endl;
		}
	}
	return 0;
}

