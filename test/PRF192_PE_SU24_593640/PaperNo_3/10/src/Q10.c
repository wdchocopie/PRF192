#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int isPerfect(int n){
    int i;
    int sum = 0;
    for(i = 1; i*i <= n ; i++){
        if (n % i == 0){
            sum += i;
            if (i != n/i){
                sum += n/i;
            }
        }
    }
    if(sum - n == n && sum - n != 0 && sum - n !=1){
        return 1;
    }
    else{
        return 0;
    }
}
  
  int n;
  scanf("%d", &n);
  
  int array[n];
  
  int i;
  for(i = 0; i < n; i++){
  	scanf("%d", &array[i]);
  }
  
  for(i = 0; i < n; i++){
  	array[i] = isPerfect(array[i]);
  }
  
  int count = 0;
  
  for(i = 0; i < n; i++){
  	if(array[i] == 1){
  		count++;
	  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  if(count !=0){
  	printf("%d", count);
  }
  else{
  	printf("There is no perfect number among the %d elements of the array", n);
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
