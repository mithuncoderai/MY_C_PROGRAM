#include <stdio.h>
int main() {
    int num=121, temp=num, rev=0, rem;
    while(temp > 0) {
        rem = temp % 10;
        rev = rev* 10 + rem;
        temp /= 10;
    }
    if(num == rev)
        printf("Number is a palindrome\n");
    else
        printf("Number is not a palindrome\n");
}
