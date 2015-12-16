#include <stdio.h>
#include <stdlib.h>

int main()
{
	int menu = 0;
	int pila[7];
	int tope = -1;
	int i=0;
	printf("elige el numero de la opcion a realizar:\n");
	while(menu != 4){
	        printf("1.introducir datos  2.borrar dato  3.imprimir datos 4.salir\n");
		scanf("%d", &menu);
		switch(menu){
			case 1: while(tope < 6){
				printf("introduce dato\n");
				tope++;
				scanf("%d", &pila[tope]);
				}
				printf("pila llena\n");
				break;

			case 2: if(tope == -1){
					printf("la pila está vacía\n");
				}
				else{
					pila[tope] = 0;
					tope--;	
				}
				break;

			case 3: i = tope;
				while(i > 0){
					printf("%d", pila[i]);
					i--;
					}
					break;
			}
	}

	return 0;
}

