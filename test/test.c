#include <stdio.h>

int main(){
	
	int a, i, j;
	scanf("%d", &a);
	
	for(i = 0; i <= a; i++){
		for(j = 0; j <= a; j++){
			if(j < i){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("-------------------------\n");
	
	for(i = 0; i <= a; i++){
		for(j = 0; j <= a; j++){
			if(j > i){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
		
	printf("-------------------------\n");
	
	for(i = a; i >= 0; i--){
		for(j = 0; j <= a; j++){
			if(j > i){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("-------------------------\n");
	
	for(i = a; i >= 0; i--){
		for(j = 0; j <= a; j++){
			if(j < i){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(i = 0; i <= a; i++){
		for(j = 0; j <= a; j++){
			if(i == j || i == a || j == a || i == 0 || j == 0 || i + j == a){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0; 
}
