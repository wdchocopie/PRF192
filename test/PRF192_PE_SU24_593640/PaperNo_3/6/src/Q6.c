#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char x[1000];
	fgets(x, 999, stdin);

void countLettersA(char *c) {
    int i;
    int size = strlen(c);
    int count = 0;
    int b[97+26] = {0};
    for(i = 0; i< size; i++){
        b[c[i]]++;
    }
    for(i = 65; i< 91; i++){
    	count += b[i];
	}
    printf("%d", count);
}



  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
    countLettersA(x);

  	
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
