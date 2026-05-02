#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N1, N2;
	cout<<"Ingrese el primer numero: ";cin>>N1;
	cout<<"Ingrese el segundo numero: ";cin>>N2;
	if (N1 != N2 and N1<N2){
		cout<<"Los numeros son distintos, "<<N2<<" es mayor y "<<N1
			<<" es menor"<<endl;
		
	}else if (N1 != N2 and N1>N2){
		cout<<"Los numeros son distintos, "<<N1<<" es mayor y "<<N2
			<<" es menor"<<endl;
	}else if(N1 == N2){
		cout<<"Los numeros son iguales, la suma de ellos es :"<<N1 + N2<<endl;
	}
	return 0;
 }

