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
  
  double array[n];
  
  int i;
  for(i = 0; i < n; i++){
  	scanf("%lf", &array[i]);
  }
  
	for(i = 0; i < n; i++){
  	array[i] = array[i] + (array[i]*8.0/100.0);
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  	for(i = 0; i < n; i++){
  	printf("%d - ", i+1);
  	printf("%.2lf\n", array[i]);
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
