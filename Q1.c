#include<stdio.h>
#include<math.h>
int main(){

// ARMSTRONG NUMBER!
    int n, or,num,result=0, remainder;

    printf("Enter a number : ");
    scanf("%d",&num);

// COUNTING DIGITS!
    or=num;
    while(or!=0){
        or=or/10;
        n++;

    }

// POWER OF DIGITS!
    while(or!=0){

        remainder=or%10;
        result=result + pow(remainder,n);
        or=or/10;
    }
    if(or==result){
        printf("Armstrong number");
    }else{
        printf("Not an Armstrong number");
    }
    return 0;
}