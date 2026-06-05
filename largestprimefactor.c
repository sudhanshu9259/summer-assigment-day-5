#include <stdio.h>

int isPrime(int n) {
    int i;
    if(n < 2)
        return 0;

    for(i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num, i, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            if(isPrime(i)) {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor of %d is %d\n", num, largest);

    return 0;
}