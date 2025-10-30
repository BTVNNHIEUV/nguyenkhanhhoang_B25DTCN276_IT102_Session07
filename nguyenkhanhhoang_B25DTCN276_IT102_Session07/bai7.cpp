#include <stdio.h>

int main(){
    int a, b, i, j, Pr;
    
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    printf("Prime numbers in [%d, %d] are:\n", a, b);
    for (i = a; i <= b; i++){
        if (i < 2) continue;
        Pr = 1;
        for (j = 2; j * j <= i; j++){
            if (i % j == 0){
                Pr = 0;
                break;
            }
        }
        if (Pr){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
