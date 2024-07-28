#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int m, n;
  scanf("%d",&m);
  scanf("%d",&n);
  
  int i;
  int odd=0, even=0;
  for(i = m; i <= n; i++){
  	if(i%2 == 0){
  		even++;
	  }
	else{
		odd++;
	}
  }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d\n", even);
  printf("%d", odd);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
