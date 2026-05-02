#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n = 5;
	string vector[10];
	vector[4] =  "Cenar";
	vector[1] = "Ir a la escuela";
	vector[2] = "Hacer la tarea";
	vector[3] = "Entrenar";
	vector[0] =	"Desayunar";
	cout<<"array original"<<endl;
	for (int i = 0; i < n; i++){
		cout<<vector[i]<<" - ";
	}
	int p = 0;
	string a = "Ir al medico";
	for (int i = n+1; i >= p; i--){
		vector[i+1]=vector[i];
	}
	cout<<" "<<endl;
	vector[p]=a;
	n=n+1;
	cout<<"Vectro luego de la inserccion"<<endl;
	for (int i=0;i<n;i++){
		cout<<vector[i]<<" - ";
	}
	return 0;
}

