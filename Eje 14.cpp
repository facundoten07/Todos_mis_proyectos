#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout<<"Ingrese un nuemro del 1 al 7: ";cin>>a;
	switch (a){
	case 1:
		cout<<"Lunes"<<endl;
		break;
	case 2:
		cout<<"Martes";
		break;
	case 3:
		cout<<"Miercoles";
		break;
	case 4: 
		cout<<"Jueves";
		break;
	case 5:
		cout<<"Viernes";
		break;
	case 6:
		cout<<"Sabado";
		break;
	case 7:
		cout<<"Domingo";
		break;
	default:
		cout<<"El numero ingresado del dia es invalido";
	}
	return 0;
}

