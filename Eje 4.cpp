#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cout<<"Ingrese un numero: ";cin>>N;
	if (N % 5==0){
		cout<<"El numero "<<N<<" es multiplo de 5"<<endl;
	}else {
		cout<<"El numero "<<N<<" no es multiplo de 5"<<endl;
	}
	return 0;
}

