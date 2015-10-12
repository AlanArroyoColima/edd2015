#include <stdio.h>

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

	printf("Escribe el tamaño de fila de la primer matriz\n");
	scanf("%d", &filasA);
	
	printf("Escribe el tamaño de columna de la primer matriz\n");
	scanf("%d", &columnasA);

	
	float matrizA[filasA][columnasA];

	printf("Escribe el tamaño de fila de la segunda matriz\n");
	scanf("%d", &filasB);

	printf("Escribe el tamaño de columna de la segunda matriz\n");
	scanf("%d", &columnasB);

	float matrizB[filasB][columnasB];
        float matrizC[filasA][columnasB];

	if (columnasA == filasB){
		
		printf("Escribe los valores para la primer matriz\n");

		for(i = 0; i < filasA; i++){
			for(j = 0; j < columnasA; j++){
				
				scanf("%f", &valor);
				matrizA[i][j] = valor;
			}
		}

		printf("Escribe los valores de la segunda matriz\n");
		
		for(i = 0; i < filasB; i++){
	
			for(j = 0; j < columnasB; j++){
	
				scanf("%f", &valor);
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

		printf("la primer matriz es:\n");
		
		for(i = 0; i < filasA; i++){
			printf("[");
			for(j = 0; j < columnasA; j++){
				if (j < columnasA - 1)
					printf("%.2f, ", matrizA[i][j]);
				else{
					printf("%.2f", matrizA[i][j]);
				}
			}
			printf("]\n");
		}
	
		printf("la segunda matriz es:\n");

                for(i = 0; i < filasB; i++){
                        printf("[");
                        for(j = 0; j < columnasB; j++){
                                if (j < columnasB - 1)
                                        printf("%.2f, ", matrizB[i][j]);
                                else{
                                        printf("%.2f", matrizB[i][j]);
				}
                        }
                        printf("]\n");
                }
		
		printf("la matriz resultante es:\n");
        
                for(i = 0; i < filasA; i++){
                        printf("[");
                        for(j = 0; j < columnasB; j++){
                                if (j < columnasB - 1)
                                        printf("%.2f, ", matrizC[i][j]);
                                else{
                                        printf("%.2f", matrizC[i][j]);
				}
                        }
                        printf("]\n");
                }

	}
	else{
		printf("No se puede realizar la multiplicación de matrices\n");
	}

	return 0;
}
