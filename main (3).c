#include <stdio.h>

int main () {
    int n;
    int i;
    do {
    printf ("digite um número \n(digite 0 para para encerrar o programa): ");
    scanf ("%d",&n);

     printf("tabuada do número:\n");
     for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", i, n, i * n);
    }
    } while (n != 0);
    return 0;
}