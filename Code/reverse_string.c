#include <stdio.h>
#include <string.h>

int main(){
    int a = 1;
    char cont;

    while(a){

        char str[1000];
        printf("Enter string ended by . : ");
        scanf("%999[^.]", str);
        getchar();
        getchar();

        printf("The original string: ");
        for(int i = 0; i < strlen(str); i++ ){
            printf("%c", str[i]);
        }

        printf("\nThe reverse string: ");
        for(int i = strlen(str) - 1; i >= 0; i-- ){
            printf("%c", str[i]);
        }

        printf("\n\nAnother run (y/n)? ");
        scanf(" %c", &cont);

        while(cont != 'y' && cont != 'n'){
            printf("\nAnother run (y/n)? ");
            scanf(" %c", &cont);
        }

        if(cont == 'n'){
            a = 0;
        }
    }
    return 0;
}
