#include<stdio.h>

const char *name = "test.dat";
int main(){
    printf("name: %s", name);
    FILE *fp = fopen(name, "wb");

    int i, n;

    for(i = 0; i < 100; i++){
        n = 2*i+1;
        fwrite(&n, sizeof(int), 1, fp);
    }

    fclose(fp);

}