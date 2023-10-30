#include <stdio.h>

int main() {
    float A[10];
    int i,t;
    for (i = 0; i < 10; i++) {
        scanf("%f", &A[i]);
    }
    for (t = 0; t < 10; t++) {
        if (A[t] <= 10) {
            printf("A[%d]=%.1f\n", t, A[i]);
        }
    }

    return 0;
}

