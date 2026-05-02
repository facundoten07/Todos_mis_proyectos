#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int hora = 6500, horasSemanales, horasExtras = 6525, extra, mult, sumExtra;
	cout<<"Ingrese las horas trabajadas en la semana: ";cin>>horasSemanales;
	if (horasSemanales<40){
		mult=hora*horasSemanales;
	}else {
		extra=horasSemanales-40;
		sumExtra=extra*horasExtras;
	}
	cout<<"Las horas semanales trabajadas son: "<<horasSemanales<<endl;
	cout<<"Las horas extras trabajadas son: "<<extra<<endl;
	cout<<"El salario total seria: $"<<mult+sumExtra<<endl;
	return 0;
}

