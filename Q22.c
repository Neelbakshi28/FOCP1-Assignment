#include <stdio.h>

int main(){
	char str[20];
	scanf("%s",str);
	// printf("%s",str);

	int x=0,y=0,i=0;

	while(str[i]!='\0'){
		if(str[i]=='z')	x++;
		if(str[i]=='o')	y++;
		i++;
	}

	if(2*x == y){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
