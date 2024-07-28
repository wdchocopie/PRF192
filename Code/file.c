#include <stdio.h>

int main(){

    char file[] = {"./abc.txt"};
    char *mode = "r+";
    FILE *fp = fopen(file, mode);
    FILE *fpo = fopen("output.txt", "w+");

    char name[255];
    int i, n;

    fscanf(fp,"%d", &n);
    fgets(name, 255, fp);


    printf("%d", n);
    printf("%s", name);

    for(i = 0; i < n; i++){
        fgets(name, 255, fp);
        fprintf(fpo, "%d. %s", (i+1), name);

    }

    if (fp != NULL){
        fclose(fp);
    }
    fclose(fpo);
    return 0;
}