#include <iostream>
#include <stdio.h>

int max(int*[], int);

int main() {

    int n, i;
    int array[100];
    int *iptr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[(i + 3) % n]));
        iptr[i] = &(array[(i + 3) % n]);
    }
    printf("%d\n", max(iptr, n));
}

int max(int *iptr[], int n) {
    int max = **iptr;
    for (int i = 1; i < n; ++i) {
        if(**iptr > max)
            max = **iptr;
        iptr++;
    }
    return max;
}