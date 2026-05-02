#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int o;
	cout<<"1_Consultas generales"<<endl;
	cout<<"2_Soporte tecnico"<<endl;
	cout<<"3_Administracion"<<endl;
	cout<<"4_Ventas"<<endl;
	cout<<"5_Salir"<<endl; 
	cout<<"Ingrese una opcion: ";cin>>o;
	switch (o){
	case 1:
		cout<<"Selecciono Consultas generales."<<endl;
		break;
	case 2: 
		cout<<"Selecciono Soporte tecnico."<<endl;
		break;
	case 3:
		cout<<"Selecciono Administracion."<<endl;
		break;
	case 4:
		cout<<"Selecciono Ventas."<<endl;
		break;
	case 5:
		cout<<"Saliendo del sistema..."<<endl;
		break;
	default: 
		cout<<"Opcion invalida.";
	}
	return 0;
}

