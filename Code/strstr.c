#include<stdio.h>
#include<string.h>

int main(){
    char str1[32767], str2[32767];
    int count = 0;
    printf("Enter a string: ");
    gets(str1);
    printf("Enter a substring: ");
    gets(str2);
    char *p = strstr(str1, str2);
    for(int i = 0; i < strlen(str1); i++){
        if (p == &str1[i]){
            count++;
            i += strlen(str2) - 1;
            p = strstr(&str1[i], str2);
        }
    }
    printf("Number of occurences: %d\n", count);
}

// while (p != NULL){
//     count++;
//     p = strstr(p + 1, str2);
// }