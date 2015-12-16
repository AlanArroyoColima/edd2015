#include <stdio.h>
#include "operaciones.h"

int main ()
{
	int menu = 0;
	struct nodo pila;
	int tope = -1;
	int valor;

	inicializar(&pila);
	printf("Elige el numero de la opcion a realizar\n");
	while(menu != 4){
		printf("1.Introducir datos 2.Borrar dato 3.Imprimir datos 4.Salir\n");
		scanf("%d", &menu);
		switch(menu){
			case 1: while (tope < 6){
					printf("introduce dato\n");
					scanf("%d", &valor);
					insertar_al_principio(&pila,valor);
					tope++;
				}
				break;
			case 2: if (tope != -1){
					borrar_lista(&pila);
					tope--;
				}
				break;
			case 3: imprimir_lista(&pila);
				break;
		}
	}
	
	return 0;
}
