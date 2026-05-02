#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n = 5, vector[10];
	vector [0] = 100;
	vector [1] = 200;
	vector [2] = 400;
	vector [3] = 300;
	vector [4] = 500;
	for (int i = 0; i < n;i ++){
		cout<<vector [i]<<" - ";
	}
	int p = 2;
	for (int i = p; i < n - 1;i ++){
		vector[i]=vector[i + 1];
	}
	n=n-1;
	cout<<"\n";
	for (int i = 0; i < n;i ++){
		cout<<vector [i]<<" - ";
	}
	return 0;
}

