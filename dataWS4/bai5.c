#include<stdio.h>
#include<string.h>

int main(){
    char str[32767];
    printf("Nhap W = ");
    scanf(" %[^\n]%*c", str); 
    int i = 0, j = 0;

    while(str[i] == ' '){
        i++;
    }


    if(i > 0){
        while(str[i] != '\0'){
            str[j++] = str[i++];
        }
        str[j] = '\0';
    }

    i = strlen(str) - 1; 
    j = strlen(str) - 1;

    while(str[i] == ' '){
        i--;
    }

    if(i < j){
        str[i + 1] = '\0';
    }


    for(i = 0 ; i < strlen(str); i++){
        if(str[i] == ' ' && str[i + 1] == ' '){
            for(j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            }
            i--;
        }
    }




    printf("Chuan hoa = %s", str);

    return 0;
}