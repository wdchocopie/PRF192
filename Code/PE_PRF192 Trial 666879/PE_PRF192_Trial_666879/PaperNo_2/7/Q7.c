#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  char a[100]; int i, n = 1;
void nhap()
{
	fflush(stdin);
	gets(a);
	if (strlen(a) % 2 == 0) nhap();
	if (strlen(a) % 2 != 0) n = strlen(a);
}

  	nhap();
	printf("\n");
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


for (i = n/2 - 2; i <= n/2 + 2; i++) 
	printf("%c", a[i]);



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
