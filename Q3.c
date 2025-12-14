#include<stdio.h>
int main(){
    
// MINUS USING BITWISE OPERATOR!
    int a,b,c; 
    printf("Enter two numbers: \n");
    scanf("%d %d",&a, &b);

    c=a+(~b+1);
    printf("Subtraction of Numbers: %d",c);
    
    return 0;
}