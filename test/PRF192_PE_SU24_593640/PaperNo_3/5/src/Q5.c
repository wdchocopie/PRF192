#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  
  int array[n], array_res[n];
  
  int i;
  
  for(i = 0; i < n; i++){
  	scanf("%d", &array[i]);
  }
  
  int index = 0;
  for(i = 0; i < n; i++){
  	if(array[i] %2 == 0){
  		array_res[index] = array[i];
  		index++;
	  }
  }
  
  int j, temp;
  for(i = 0; i < index; i++){
  	for(j = i + 1; j < index; j++){
  		if(array_res[i] > array_res[j]){
  			temp = array_res[i];
  			array_res[i] = array_res[j];
  			array_res[j] = temp;
		  }
	  }
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i = 0; i < index; i++){
		printf("%d ", array_res[i]);
	}



  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
