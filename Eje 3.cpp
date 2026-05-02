#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre;
	float calificacion;
	cout<<"Ingrese el nombre completo del alumno: ";cin>>nombre;
	cout<<"Ingrese la calficacion del examen: ";cin>>calificacion;
	if (calificacion>=6){
		cout<<nombre<<" APROBADO"<<endl;
	}else {
		cout<<nombre<<" DESAPROBADO"<<endl;
	}
	return 0;
}

