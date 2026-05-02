#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad;
	cout<<"Ingrese su edad: ";cin>>edad;
	if (edad>=18){
		cout<<"Usted es mayor de edad, puede votar"<<endl;
	}else {
		cout<<"Usted es menor de edad, no puede votar"<<endl;
	}
	return 0;
}

