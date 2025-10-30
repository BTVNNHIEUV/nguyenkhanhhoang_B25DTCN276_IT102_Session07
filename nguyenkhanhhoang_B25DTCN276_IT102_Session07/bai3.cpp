#include <stdio.h>

int main(){
    int n, original, reversed, digit;
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
        original = n;
        reversed = 0;
        
        while (n != 0) {
            digit = n % 10;
            reversed = reversed * 10 + digit;
            n = n / 10;
        }
        if (reversed == original)
            printf("%d la so doi xung\n", original);
        else
            printf("%d khong phai la so doi xung. Moi nhap lai!\n", original);
        n = original;

    } while (reversed != original);
    return 0;
}
