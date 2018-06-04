#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){
    int x, y;
    printf("Digite dois valores ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("\nAi trocou os numeros: %d, %d", x, y);
    return 0;
}
