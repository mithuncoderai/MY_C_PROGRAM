#include<stdio.h>
#include<string.h>
int main(){
    char goapl[20];
    printf("enter your string\n");
    scanf("%s",goapl);
    strcat(goapl,"goapl");
    printf("before concact %s",goapl);
    strcat(goapl,"legend");
    printf("after concact %s","legend");
}
