#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float matrizA[3][3];
	float matrizB[3][3];
	float matrizC[3][3];
	int contadorA;
	int contadorB;
	int contadorC;
	float valor;
	cout<<"Escribe los valores de la primer matriz"<<endl;
	
	for(contadorA = 0; contadorA < 3; contadorA++){
		
		for(contadorB = 0; contadorB < 3; contadorB++){
			
			cin>>valor;
			matrizA[contadorA][contadorB] = valor;
		}
	}

	cout<<"Escribe los valores de la segunda matriz"<<endl;

        for(contadorA = 0; contadorA < 3; contadorA++){

                for(contadorB = 0; contadorB < 3; contadorB++){

                        cin>>valor;
                        matrizB[contadorA][contadorB] = valor;
                }
        }

	cout<<"la primera matriz es:"<<endl;

        for(contadorA = 0; contadorA < 3; contadorA++){

	cout<<"\n[";
                for(contadorB = 0; contadorB < 3; contadorB++){

                      	 if(contadorB < 2)
				
				cout<<fixed<<setprecision(2)<<matrizA[contadorA][contadorB]<<", ";
			 else
				 cout<<fixed<<setprecision(2)<<matrizA[contadorA][contadorB];
                }
	cout<<"]";
        }

	cout<<"\nla segunda matriz es:"<<endl;

        for(contadorA = 0; contadorA < 3; contadorA++){

        cout<<"\n[";
                for(contadorB = 0; contadorB < 3; contadorB++){
		       
   		       if(contadorB < 2)
                    		 cout<<fixed<<setprecision(2)<<matrizB[contadorA][contadorB]<<", ";
		       else
			         cout<<fixed<<setprecision(2)<<matrizB[contadorA][contadorB];
                }
        cout<<"]";
        }
	
	for(contadorA = 0; contadorA < 3; contadorA++){
		for(contadorB = 0; contadorB < 3; contadorB++){
		matrizC[contadorA][contadorB]=0;
			for(contadorC = 0; contadorC < 3; contadorC++){
				matrizC[contadorA][contadorB] = matrizC[contadorA][contadorB] + matrizA[contadorA][contadorC] * matrizB[contadorC][contadorB];
			}
		}
	}

	cout<<"\nla matriz resultante es:"<<endl;
	for(contadorA = 0; contadorA < 3; contadorA++){
	cout<<"\n[";
		for(contadorB = 0; contadorB < 3; contadorB++){
			if(contadorB < 2)
				cout<<fixed<<setprecision(2)<<matrizC[contadorA][contadorB]<<", ";
			else
				cout<<fixed<<setprecision(2)<<matrizC[contadorA][contadorB];
		}
	cout<<"]";
	}

	return 0;
}
