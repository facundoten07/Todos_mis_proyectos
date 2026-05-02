#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x;
	cout<<"Ingrese un numero natural: ";cin>>x;
	if (x % 2 == 0){
		cout<<"El numero "<<x<<" es par"<<endl;
	}else {
		cout<<"El numero "<<x<<" es impar"<<endl;
	}
	return 0;
}

