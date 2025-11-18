#include <stdio.h>


int main() {
    int a, b, lcmValue;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

   
    lcmValue = (a * b) / gcd(a, b);

    printf("LCM of %d and %d is %d\n", a, b, lcmValue);

    return 0;
}
