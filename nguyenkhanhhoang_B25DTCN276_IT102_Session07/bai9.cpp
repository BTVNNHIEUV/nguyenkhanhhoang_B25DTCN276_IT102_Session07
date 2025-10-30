#include <stdio.h>

int main(){
    int n, a, b;
    int found = 0; // bien kiem tra co tim duoc cap nao khong
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Cac cap (a, b) thoa man a^3 + b^3 = %d la:\n", n);

    for (a = 0; a * a * a <= n; a++){
        for (b = 0; b * b * b <= n; b++){
            if (a * a * a + b * b * b == n){
                printf("(%d, %d)\n", a, b);
                found = 1;
            }
        }
    }

    if (found == 0)
        printf("Khong co cap nao thoa man!\n");
    return 0;
}
