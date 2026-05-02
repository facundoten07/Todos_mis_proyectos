#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int p, n=5;
	string vector[10];
	vector[0]="Lautaro";
	vector[1]="Joaquin";
	vector[2]="Naomi";
	vector[3]="Moises";
	vector[4]="Fonseca";
	cout<<"\t---Lista Actual---\n";
	for (int i = 0; i < n;i ++){
		cout<<vector [i]<<" - ";
	}
	cout<<endl;
	cout<<"Ingrese posición a eliminar: ";cin>>p;
	if (p<6){
		for (int i = p; i < n - 1;i ++){
			vector[i]=vector[i + 1];
		}
		n=n-1;
		cout<<"\n";
		cout<<"\tLista Actualizada\n";
		for (int i = 0; i < n;i ++){
			cout<<vector [i]<<" - ";
		}
	}
	else{
		cout<<"Fuera de rango"<<endl;
	}
	return 0;
}

