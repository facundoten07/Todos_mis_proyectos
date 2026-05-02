#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x;
	cout<<"Ingrese un numero: ";cin>>x;
	if (x>0){
		cout<<"El numero es positivo"<<endl;
	} else if (x==0){
		cout<<"El numero es igual a 0"<<endl;
	} else if(x<0){
		cout<<"El numero es negativo"<<endl;
	}
	return 0;
}

