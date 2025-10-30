#include <stdio.h>

int main(){
    int n, original, sum, digit;
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
        original = n;
        sum = 0;
        while (n != 0){
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n = n / 10;
        }
        if (sum == original)
            printf("%d la so Armstrong\n", original);
        else
            printf("%d khong phai la so Armstrong. Moi nhap lai!\n", original);
        n = original;
    } while (sum != original);
    return 0;
}

