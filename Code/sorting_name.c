#include <stdio.h>
#include <string.h>

int main() {
   int i, j, n;
   char str[100][100], s[100];
   
   printf("Enter number of names: ");
   scanf("%d", &n);
   getchar();
   
   printf("Enter names in any order:\n");
   for(i = 0; i < n; i++) {
        fflush(stdin);
        scanf("%100[^\n]", str[i]);
   }
   
   for(i = 0; i < n; i++) {
      for(j = i + 1; j < n; j++) {
         if(strcmp(str[i], str[j]) > 0) {
            strcpy(s, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], s);
         }
      }
   }
   
   printf("\nThe sorted order of names is:\n");
   for(i = 0; i < n; i++) {
      printf("%s\n", str[i]);
   }
   
   return 0;
}
