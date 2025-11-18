#include <stdio.h>

int main() {
int marks;
printf("Enter the marks of the students\n");
scanf("%d",&marks);
if(marks>75){
    printf("Distinction \n");
}
    else if( marks>40 && marks<75){
    printf("fail\n");
}
    return 0;
}
