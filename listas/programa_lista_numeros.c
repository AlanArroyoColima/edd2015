#include <stdio.h>
#include "operaciones.h"

int main()
{
	struct nodo lista;
	int valor;
	int valor_antes;
	int contador = 1;

	inicializar(&lista);
	while(contador <= 10){
		insertar_al_final(&lista,contador);
		contador++;
	}
	printf("Escriba un numero\n");
	scanf("%d", &valor);
	printf("escribe el valor que estara antes del valor introducido\n");
	imprimir_lista(&lista);
	printf("\n");
	scanf("%d", &valor_antes);
	insertar_despues_de(&lista, valor, valor_antes);
	imprimir_lista(&lista);

	return 0;
}
