#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,d;
	cout<<"Ingrese el valor de a: ";cin>>a;
	cout<<"Ingrese el valor de b: ";cin>>b;
	cout<<"Ingrese el valor de c: ";cin>>c;
	d = (b*b) - (4*a*c);
	cout<<"El discriminante: "<<d<<endl;
	if (d<0){
		cout<<"La ecuacion no posee soluciones reales"<<endl;
	}else if(d==0){
		cout<<"la ecuación posee una única solución real"<<endl;
	}else {
		cout<<"la ecuación posee dos soluciones reales"<<endl;
	}
	return 0;
}

