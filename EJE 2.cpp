#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int vector[10], positivo = 0,negativo = 0,cero = 0,suma=0;
	for (int i = 0;i<10; i++){
		cout<<"Ingrese el numero: ";cin>>vector[i];
	}
	for (int i = 0;i<10;i++){
		cout<<vector[i]<<" | ";
	}
	cout<<endl;
	for (int i =0;i<10;i++){
		if (vector[i]>0){
			cout<<vector[i]<<" | ";
			positivo++;
		}
		else if (vector[i]<0){
			negativo++;
		}
		else {
			cero++;
		}
	}
	if (negativo==0){
		cout<<"No tiene ningun numero negativo"<<endl;
	}else {
		cout<<"Tiene "<<negativo<<" negativos "<<endl;
	}
	if (positivo==0){
		cout<<"No tiene ningun numero positivo"<<endl;
	}else {
		cout<<"Tiene "<<positivo<<" positivos "<<endl;
	}
	if (cero==0){
		cout<<"No tiene ningun cero"<<endl;
	}else {
		cout<<"Tiene "<<cero<<" ceros "<<endl;
	}
	for (int i =0; i<10;i++){
		suma= suma+vector[i];
	}
	cout<<suma;
	return 0;
}

