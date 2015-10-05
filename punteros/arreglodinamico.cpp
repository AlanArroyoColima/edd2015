#include <iostream>

using namespace std;

int main ()
{
	int * puntero;
	int tamano;

	cout<< "escribe el tamaño del arreglo"<<endl;
	cin>> tamano;

	puntero = new int [tamano];

	for(int i = 0; i < tamano; i++){
		puntero[i] = i+1;
		cout<<puntero[i]<<endl;
	}
	
	delete[] puntero;
	
	return 0;
}
