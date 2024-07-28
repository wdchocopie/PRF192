#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int i,n,kt,a[100];
  scanf("%d",&n);
  for (i=0;i<n;i++){
  	scanf ("%d",&a[i]);
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
kt=1;
for(i=0;i<=(n-2)/2;i++)
	if (a[i]!=a[n-i-1]){
		kt=0;break;
	}
if (kt) printf ("1");
else printf ("0");







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
