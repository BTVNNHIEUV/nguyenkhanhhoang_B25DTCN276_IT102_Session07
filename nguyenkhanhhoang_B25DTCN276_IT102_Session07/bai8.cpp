#include <stdio.h>

int main(){
    long n;
    int x, count = 0;
    printf("Enter n: ");
    scanf("%ld", &n);
    printf("Enter digit x (0-9): ");
    scanf("%d", &x);
    
    long temp = n;
    
    if (n == 0 && x == 0) {
        count = 1;
    } else{
        while (temp != 0) {
            int digit = temp % 10;
            if (digit == x) {
                count++;
            }
            temp = temp / 10;
        }
    }
    
    printf("Digit %d appears %d times in %ld\n", x, count, n);
    return 0;
}

