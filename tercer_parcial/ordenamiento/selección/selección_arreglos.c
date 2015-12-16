#include <stdio.h>

int main()
{
    int seleccion[10];
    int n;
    int i;
    int aux;
    printf("Escribe 10 valores\n");
    for(n = 0; n < 10; n++){
        scanf("%d", &seleccion[n]);
    }

    for(n = 0; n < 10; n++){
        for(i = 0; i < 10; i++){
            if(seleccion[i] < seleccion[n]){
                aux = seleccion[i];
                seleccion[n] = seleccion[i];
                seleccion[i] = aux;
            }
        }
    }

    for(n = 0; n < 10; n++){
        printf(" %d", n);
    }

    return 0;
}

