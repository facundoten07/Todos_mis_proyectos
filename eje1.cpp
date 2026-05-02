#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n = 5; 
	string vector [10];
	vector [0] = "Crack";
	vector [1] = "Aby";
	vector [2] = "Lopéz";
	vector [3] = "x";
	vector [4] = "ad";
	cout<<" Array Original "<<endl;
	for (int i = 0; i < n; i++){
		cout<<vector[i]<<" - ";
	}
	cout<<" "<<endl;
	int p = 3;
	string x = "mati";
	for (int i = n-1; i >= p; i--){
		vector[i+1] = vector[i];
	}
	vector[p] = x;
	n = n + 1;
	cout<<"Vector Luego de la Insercion"<<endl;
	for (int i = 0; i<n; i++){
		cout<<vector[i]<<" - ";
	}
	return 0;
}

