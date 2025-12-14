#include<stdio.h>
int main(){

// DECIMAL TO BINARY & BINARY TO DECIMAL!
    int deci=0, bs=1, lstdigit,choice,deci1, bs1=1, lstdigit1;
    long binary,binary1=0;
   
    printf("1.Binary to Decimal!\n2.Decimal to Binary!\n");
    printf("---Enter your choice---\n");
    scanf("%d",&choice);

// BINARY TO DECIMAL!
    if(choice==1){
       printf("\nEnter a binary number: ");
        scanf("%d",&binary);
        while(binary>0){
            lstdigit = binary % 10;
            deci += lstdigit * bs;
            bs *= 2;
            binary /= 10;
        }
        printf("Decimal Number: %d",deci);
    }

// DECIMAL TO BINARY!
    if(choice==2){
        printf("\nEnter a decimal number: ");
        scanf("%d",&deci1);
        while(deci1>0){
            lstdigit1 = deci1 % 2;
            binary1 = binary1 + lstdigit1 * bs1;
            deci1 /= 2;
            bs1 *= 10;
        }
        printf("Binary Number: %d",binary1);
    }
    if(choice<1 || choice>2){
        printf("Invalid Choice!");
    }
    return 0;
   
}