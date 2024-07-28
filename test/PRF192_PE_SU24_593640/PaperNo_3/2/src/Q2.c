#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int m, n;
  
  scanf("%d", &m);
  scanf("%d", &n);
  
  int temp;
  if(m > n){
  	temp = m;
  	m = n;
  	n = temp;
  }
  
  double ave;
  ave = (m + n) / 2.0;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%.3lf", ave);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
