#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"Ingrese el valor del primer numero: ";cin>>a;
	cout<<"Ingrese el valor del segundo numero: ";cin>>b;
	cout<<"Ingrese el valor del tercer numero: ";cin>>c;
	if (a == b and b == c ){
		cout<<"Los tres numeros ingresados son iguales"<<endl;
	}else if (a == b or a == c or b == c){
		cout<<"Si hay dos iguales y uno distinto"<<endl;
	}else {
		cout<<"Los tres numeros son distintos"<<endl;
	}
	return 0;
}

