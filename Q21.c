#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading 
	int numberOfPhotos;
	scanf("%d",&numberOfPhotos);

	for (int i=0;i<numberOfPhotos;i++){
		int W,H;
		scanf("%d %d",&W,&H);
		// printf("Dimensions: %d, %d\n",W,H);
		if(W<num || H<num){
			printf("UPLOAD ANOTHER\n");
		}
		else if(W==H){
			printf("ACCEPTED\n");
		}
		else{
			printf("CROP IT\n");
		}
	}
	
}
