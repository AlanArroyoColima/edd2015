#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		/* Mientras el siguiente sea diferente de nulo */
		while ( actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = NULL;
	}
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *actual;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = NULL;
    if(cabecera->sig == NULL){
        cabecera->sig = nuevo;
    }
    else{
            actual = cabecera->sig;
            while(actual->sig != NULL){
                actual = actual->sig;
		}
        actual->sig = nuevo;
	}

}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	if(cabecera->sig != NULL){
		actual = cabecera->sig;
		while (actual->sig != NULL){
			printf("%d -> ", actual->val);
			actual = actual->sig;
		}
	printf("%d", actual->val);
	}
}
void seleccion(struct nodo *cabecera)
{
    int n;
    int i;
    struct nodo *aux;
    struct nodo *aux2;
    struct nodo *aux3;
    struct nodo *recorrido;
    aux = cabecera;
    aux2 = cabecera;
    aux3 = cabecera;
    recorrido = cabecera;

    for(n = 0; n < 10; n++){
            aux2 = recorrido->sig;
        for(i = 0; i < 10; i++){
            if(aux2->sig != NULL)
            aux3 = aux2->sig;
            if(aux3->val < aux2->val){
                 aux2 = aux3;
            }
            if(aux3->sig != NULL)
            aux3 = aux3->sig;
        }
        while(aux->sig != aux2){
            aux = aux->sig;
        }
        aux->sig = aux2->sig;
        aux2->sig = recorrido->sig;
        recorrido->sig = aux2;
        recorrido = recorrido->sig;
        aux = cabecera;
    }
}
