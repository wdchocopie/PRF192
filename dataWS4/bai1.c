#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("Nhap so luong SV: ");
    scanf("%d", &n);

    char name[n][100], tname[100]; 

    int i, j;
    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("Nhap ten SV %d: ", (i+1) );
        scanf("%99s", name[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(strcmp(name[j], name[i]) < 0){
                strcpy(tname, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tname);
            }
        }
    }

    printf("Danh sach SV sau khi sap xep:\n");
    for(i = 0; i < n; i++){
        printf("Ten SV %d: %s\n", (i+1), name[i]);
    }

    return 0;
}