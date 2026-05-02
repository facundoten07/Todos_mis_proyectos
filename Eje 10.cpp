#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cout<<"Ingrese un numero: ";cin>>N;
	if (N>0){
		cout<<"El numero "<<N<<" es positivo"<<endl;
	}else if (N<0){
		cout<<"El numero "<<N<<" es negativo"<<endl;
	}else if (N==0){
		cout<<"El numero es 0"<<endl;
	}
	return 0;
}
