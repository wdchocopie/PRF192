#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char W[1000], S[100];
    int p, q;

    printf("Nhap W = ");
    fgets(W, sizeof(W), stdin);
    W[strcspn(W, "\n")] = '\0'; 

    printf("Nhap S = ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0'; 

    printf("P = ");
    scanf("%d", &p);
    printf("Q = ");
    scanf("%d", &q);

    int lenW = strlen(W);

    if (p > lenW || q > lenW) {
        return 0; 
    }

    char result[2000] = "";

    strncat(result, W, p);
    strcat(result, S);
    strcat(result, W + p);

    char final_result[2000] = "";
    int insert_pos = q + strlen(S);
    strncat(final_result, result, insert_pos);
    strcat(final_result, S);
    strcat(final_result, result + insert_pos);

    printf("Ket qua: %s\n", final_result);

    return 0;
}
