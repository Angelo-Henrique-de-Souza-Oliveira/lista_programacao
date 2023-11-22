#include <stdio.h>

int main() {
    int n;
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    int num[n],vpar[n],vimpar[n],num_pares = 0,num_impares = 0;
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            vpar[num_pares] = num[i];
            num_pares++;
        } else {
            vimpar[num_impares] = num[i];
            num_impares++;
        }
    }
    for (int i = 0; i < num_pares - 1; i++) {
        for (int j = i + 1; j < num_pares; j++) {
            if (vpar[i] > vpar[j]) {
                int temp = vpar[i];
                vpar[i] = vpar[j];
                vpar[j] = temp;
            }
        }
    }
    for (int i = 0; i < num_impares - 1; i++) {
        for (int j = i + 1; j < num_impares; j++) {
            if (vimpar[i] < vimpar[j]) {
                int temp = vimpar[i];
                vimpar[i] = vimpar[j];
                vimpar[j] = temp;
            }
        }
    }
    printf("[ ");
    for (int i = 0; i < num_pares; i++) {
        printf("%d ", vpar[i]);
    }
    printf("]");

    printf("\n[ ");
    for (int i = 0; i < num_impares; i++) {
        printf("%d ", vimpar[i]);
    }

    printf("]\n");

    return 0;
}