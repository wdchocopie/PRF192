#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  
  int n, k;
  scanf("%d", &n);
  
  int array[n];
  
  int i;
  for(i = 0; i < n; i++){
  	scanf("%d", &array[i]);
  }
  
  scanf("%d", &k);
  
  int j, temp;
  
  for(i = 0; i < n;  i++){
  	for(j = i+1; j < n; j++ ){
  		if(array[i] > array[j]){
  			temp = array[i];
  			array[i] = array[j];
  			array[j] = temp;
		  }
	  }
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for(i = 0; i < n; i++){
  	if(array[i] != k){
  		printf("%d ", array[i]);
	  }
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
