#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout<<"Ingrese la califiacion entre el 1 y el 10: ";cin>>a;
	switch (a){
	case 10:
		cout<<"Sobresaliente"<<endl;
		break;
	case 9:
	case 8:
		cout<<"Muy bueno"<<endl;
		break;
	case 6:
	case 7:
		cout<<"Bueno"<<endl;
		break;
	case 4:
	case 5:
		cout<<"Regular"<<endl;
		break;
	case 1:
	case 2:
	case 3:
		cout<<"Insuficiente"<<endl;
		break;
	default: 
		cout<<"Calificacion invalida"<<endl;
	}
	return 0;
}

