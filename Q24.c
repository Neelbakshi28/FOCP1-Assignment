#include <stdio.h>

int main(){
	char str[100];
	scanf("%s",str);

	int i=0;
	while(str[i]!='\0'){
		char ch=str[i];
		if (ch >= 'a' && ch <= 'z') { // Check if it's a lowercase letter
        	ch = ch - 32;
		}
		else{
			ch = ch + 32;
		}
		str[i]=ch;
		i++;
	}
	printf("%s",str);
}
