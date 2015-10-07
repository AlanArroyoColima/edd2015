#include <stdio.h>

int main ()
{
	int matrizA[3][3];
	int matrizB[3][3];
	int matrizC[3][3];
	int contadorA;
	int contadorB;
	int contadorC;
	int valor;
	printf("Escribe los valores de la primer matriz\n");
	
	for(contadorA = 0; contadorA < 3; contadorA++){
		
		for(contadorB = 0; contadorB < 3; contadorB++){
			
			scanf("%d", &valor);
			matrizA[contadorA][contadorB] = valor;
		}
	}

	printf("Escribe los valores de la segunda matriz\n");

        for(contadorA = 0; contadorA < 3; contadorA++){

                for(contadorB = 0; contadorB < 3; contadorB++){

                        scanf("%d", &valor);
                        matrizB[contadorA][contadorB] = valor;
                }
        }

	printf("\nla primera matriz es:\n");

        for(contadorA = 0; contadorA < 3; contadorA++){

	printf("\n[");
                for(contadorB = 0; contadorB < 3; contadorB++){

                      	 if(contadorB < 2)
				 printf("%d, ", matrizA[contadorA][contadorB]);
			 else
				 printf("%d",matrizA[contadorA][contadorB]);
                }
	printf("]");
        }

	printf("\nla segunda matriz es: \n");

        for(contadorA = 0; contadorA < 3; contadorA++){

        printf("\n[");
                for(contadorB = 0; contadorB < 3; contadorB++){
		       
   		       if(contadorB < 2)
                      		 printf("%d, ", matrizB[contadorA][contadorB]);
		       else
			         printf("%d", matrizB[contadorA][contadorB]);
                }
        printf("]");
        }
	
	for(contadorA = 0; contadorA < 3; contadorA++){
		for(contadorB = 0; contadorB < 3; contadorB++){
		matrizC[contadorA][contadorB]=0;
			for(contadorC = 0; contadorC < 3; contadorC++){
				matrizC[contadorA][contadorB] = matrizC[contadorA][contadorB] + matrizA[contadorA][contadorC] * matrizB[contadorC][contadorB];
			}
		}
	}

	printf("\nla matriz resultante es:\n");
	for(contadorA = 0; contadorA < 3; contadorA++){
	printf("\n[");
		for(contadorB = 0; contadorB < 3; contadorB++){
			if(contadorB < 2)
				printf("%d, ", matrizC[contadorA][contadorB]);
			else
				printf("%d", matrizC[contadorA][contadorB]);
		}
	printf("]");
	}

	return 0;
}
