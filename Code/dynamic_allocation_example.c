#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swap(char *pc1, char *pc2){
    char temp = *pc1;
    *pc1 = *pc2;
    *pc2 = temp;
}

int main(){
    char *pc1, *pc2;
    printf("input two characters: ");
    pc1 = (char *)malloc(sizeof(char));
    pc2 = (char *)malloc(sizeof(char));
    scanf("%c %c", pc1, pc2);
    if (pc1 > pc2){
        swap(pc1, pc2);
    }
    printf("The characters in ascending order are: %c %c\n", *pc1, *pc2);
    free(pc1);
    free(pc2);
    return 0;
}