#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	char s[10][30],t[30];
	int i,j,n;
	n=5;
	for ( i =1 ; i<=n; i++){
		gets(s[i]);
	}


  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for( i = 1; i <=n ;i++){	
        for( j =i+1; j <= n ;j++){
            if(strcmp( s[i] , s[j] )>0){
              strcpy(t,s[j]);
              strcpy(s[j],s[i]);
            strcpy(s[i],t);
        	}
  		 	}
    		}
    		
for( i = 1; i <= n;i++)
  		 	printf("%s ",s[i]);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
