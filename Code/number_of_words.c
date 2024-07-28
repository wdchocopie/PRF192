#include<stdio.h>

int main(){
    char str[32767];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++){ 
        if ((str[i] != ' ' && str[i+1] == '\0') || (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')){
            count++;
        }
    }
    printf("Number of words: %d\n", count);
}