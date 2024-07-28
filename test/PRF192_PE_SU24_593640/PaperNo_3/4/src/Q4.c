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
  
  
  
  void triangle(int n){
  	int kytu=1;
  	int i, j, k, m;
	for (i=1; i<=n; i++){
		for (j=n; j>=i; j--) 
		    printf ("  ");
		for (k=1; k<=i; k++)
			if(k < i){
				printf ("%d ", kytu++);
			} 
		    else{
		    	printf ("%d", kytu++);
			}
		for (m=1; m<i; m++)
		    printf (" %d", kytu++);
		    printf ("\n");
		    kytu=1;
	}
	  
  }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	
	triangle(n);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
