#include <stdio.h>
#include "operaciones.h"

int main()
{
    int valor;
    struct nodo lista;
    int n=0;
    inicializar(&lista);
    printf("Escribe 10 valores\n");
    while(n < 10){
        scanf("%d", &valor);
        insertar_al_final(&lista, valor);
        n++;
    }
    seleccion(&lista);
    imprimir_lista(&lista);
    borrar_lista(&lista);

    return 0;
}
