#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int precio[10], n=5,p;
	string productos[10];
	precio[0]=15000;
	precio[1]=22000;
	precio[2]=180000;
	precio[3]=35000;
	precio[4]=42000;
	productos[0]="Mouse";
	productos[1]="Teclado";
	productos[2]="Monitor";
	productos[3]="Parlantes";
	productos[4]="Webcam";
	
	cout<<"\t---Productos Actuales---\n";
	for (int i = 0; i < n;i ++){
		cout<<i<<"- "<<productos[i]<<" = $"<<precio[i]<<endl;
	}
	cout<<"Ingrese Numero de Producto a Borrar: ";cin>>p;
	if (p<6 && p>-1){
		for (int i = p; i < n - 1;i ++){
			productos[i]=productos[i + 1];
			precio[i]=precio[i + 1];
		}
		n=n-1;
		cout<<"\n";
		cout<<"\tProductos Actualizados\n";
		for (int i = 0; i < n;i ++){
			cout<<i<<"- "<<productos[i]<<" = $"<<precio[i]<<endl;
		}
	}
	else{
		cout<<"Fuera de Rango"<<endl;
	}
	return 0;
}

