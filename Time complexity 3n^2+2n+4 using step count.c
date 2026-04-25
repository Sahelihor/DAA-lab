#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("*");   
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("#");
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("@");
        }
    }

    for(i = 0; i < n; i++) {
        printf("A");
    }

    for(i = 0; i < n; i++) {
        printf("B");
    }

    printf("1");
    printf("2");
    printf("3");
    printf("4");

    return 0;
}