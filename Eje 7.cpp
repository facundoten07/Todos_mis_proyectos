#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N1, N2;
	cout<<"Ingrese el primer numero: ";cin>>N1;
	cout<<"Ingrese el segundo numero: ";cin>>N2;
	if (N1==N2){
		cout<<"Los numeros "<<N1<<" y "<<N2<<" son iguales"<<endl;
	}else {
		cout<<"Los numeros son distintos"<<endl;
	}
	return 0;
}

