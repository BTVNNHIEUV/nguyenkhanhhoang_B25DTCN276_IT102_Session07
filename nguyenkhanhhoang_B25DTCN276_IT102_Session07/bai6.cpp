#include <stdio.h>

int main(){
    int n, reversed = 0;
    printf("Nhap n = ");
    scanf("%d", &n);

    while (n != 0){
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    printf("So dao nguoc = %d\n", reversed);
    return 0;
}
