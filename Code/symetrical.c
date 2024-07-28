#include<stdio.h>
#include<string.h>

int main(){
    char str[32767];
    int i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++){
        if (str[i] != str[strlen(str) - i - 1]){
            printf("Not symmetrical\n");
            return 0;
        }
    }
    printf("Symmetrical\n");
    return 0;

}   