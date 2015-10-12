#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int filasA;
	int columnasA;
	int filasB;
	int columnasB;
	float valor;
	int i;
	int j;
	int k;

	cout<<"Escribe el tamaño de fila de la primer matriz"<<endl;
	cin>>filasA;
	
	cout<<"Escribe el tamaño de columna de la primer matriz"<<endl;
	cin>>columnasA;

	float matrizA[filasA][columnasA];

	cout<<"Escribe el tamaño de fila de la segunda matriz"<<endl;
	cin>>filasB;

	cout<<"Escribe el tamaño de columna de la segunda matriz"<<endl;
	cin>>columnasB;

	float matrizB[filasB][columnasB];
        float matrizC[filasA][columnasB];

	if (columnasA == filasB){
		
		cout<<"Escribe los valores para la primer matriz"<<endl;

		for(i = 0; i < filasA; i++){
			for(j = 0; j < columnasA; j++){
				
				cin>>valor;
				matrizA[i][j] = valor;
			}
		}

		cout<<"Escribe los valores de la segunda matriz"<<endl;
		
		for(i = 0; i < filasB; i++){
	
			for(j = 0; j < columnasB; j++){
	
				cin>>valor;
                                matrizB[i][j] = valor;
			}
		}
			
		for(i = 0; i < filasA; i++){
			for(j = 0; j < columnasB; j++){
					
				matrizC[i][j] = 0;
				
				for(k = 0; k < columnasA; k++){

					matrizC[i][j] = matrizC[i][j] + matrizA[i][k] * matrizB[k][j];
				}
			}
		}

		cout<<"la primer matriz es:"<<endl;
		
		for(i = 0; i < filasA; i++){
			cout<<"[";
			for(j = 0; j < columnasA; j++){
				if (j < columnasA - 1)
					cout<<fixed<<setprecision(2)<<matrizA[i][j]<<", ";
				else{
					cout<<fixed<<setprecision(2)<<matrizA[i][j];
				}
			}
			cout<<"]"<<endl;
		}
	
		cout<<"la segunda matriz es:"<<endl;

                for(i = 0; i < filasB; i++){
                        cout<<"[";
                        for(j = 0; j < columnasB; j++){
                                if (j < columnasB - 1)
                                        cout<<fixed<<setprecision(2)<<matrizB[i][j]<<", ";
                                else{
                                        cout<<fixed<<setprecision(2)<<matrizB[i][j];
				}
                        }
                        cout<<"]"<<endl;
                }
		
		cout<<"la matriz resultante es:"<<endl;
        
                for(i = 0; i < filasA; i++){
                        cout<<"[";
                        for(j = 0; j < columnasB; j++){
                                if (j < columnasB - 1)
                                        cout<<fixed<<setprecision(2)<<matrizC[i][j]<<", ";
                                else{
                                        cout<<fixed<<setprecision(2)<<matrizC[i][j];
				}
                        }
                        cout<<"]"<<endl;
                }

	}
	else{
		cout<<"No se puede realizar la multiplicación de matrices"<<endl;
	}

	return 0;
}
