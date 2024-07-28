#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], w[1000];
    printf("Nhap xau S: ");
    scanf("%[^\n]", s);
    getchar(); // Clear the newline character left by scanf
    printf("Nhap xau W: ");
    scanf(" %[^\n]", w);

    char *pos = strstr(s, w);
    if (pos != NULL) {
        do {
            printf("W xuat hien trong S o vi tri %ld\n", pos - s);
            pos = strstr(pos + 1, w);
        } while (pos != NULL);
    } else {
        printf("W khong xuat hien trong S\n");
    }

    return 0;
}
