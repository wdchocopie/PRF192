#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int i,j;
	char s[4];
	for ( i =0 ; i<4; i++){
		scanf("%s", &s[i]);
	}

  	for( i = 0; i < 3;i++){	
        for( j =i+1; j < 4 ;j++){
            if(s[i]>s[j]){
               char tg = s[i];
                s[i] = s[j];
                s[j] = tg;	
        	}
  		 	}
    		}



  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for( i = 0; i < 4;i++)
  		 	printf("%c ",s[i]);



  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
