#include <stdio.h>

int main(){
	int a, count = 0;
	scanf("%d", &a);
	int arr[a];
	
	int i, b;
	for( i = 0; i < a; i++){
		scanf("%d" , &b);
		if(b % 2 != 0 && b > 0){
			arr[count] = b;
			count++;
		}
	}
	
	int j, temp;
	for (i = 0; i < count; i++){
		for (j = i+1 ; j < count; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	int res;
	for(i = 0; i < count; i++){
		res = arr[i] * arr[i];
		printf("%d ", res);
	}
	return 0;
}  
