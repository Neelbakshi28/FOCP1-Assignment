#include <stdio.h>

int main(){
	int n=0; //number of test cases

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		int green,purple;

		scanf("%d %d",&green,&purple);
		int high,low;
		if(green>purple){
			high=green;
			low=purple;
		}else{
			high=purple;
			low=green;
		}
		// printf("high: %d,low: %d\n",high,low);

		int nop; //number of participants

		scanf("%d",&nop);
		int c1=0,c2=0; //count of right answers;

		for(int j=0;j<nop;j++){
			int a,b;
			scanf("%d %d",&a,&b);
			if(a==1)	c1++;
			if(b==1)	c2++;
		}
		// printf("c1: %d, c2: %d\n",c1,c2);
		int cost;
		if(c1>c2){
			cost=(c1*low)+(c2*high);
		}
		else{
			cost=(c1*high)+(c2*low);
		}
		printf("%d\n",cost);
	}
}
