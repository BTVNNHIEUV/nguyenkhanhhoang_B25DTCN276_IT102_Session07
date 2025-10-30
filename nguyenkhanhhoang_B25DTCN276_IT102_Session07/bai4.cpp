#include <stdio.h>

int main(){
    int m, n, i, j;
    printf("Nhap chieu dai m = ");
    scanf("%d", &m);
    printf("Nhap chieu rong n = ");
    scanf("%d", &n);

    for (i = 1; i <= m; i++){
        for (j = 1; j <= n; j++){
            if (i == 1 || i == m || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
