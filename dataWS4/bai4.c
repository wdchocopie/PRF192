#include <stdio.h>
#include <string.h>

void replace_substring(char *st1, const char *st2, const char *st3) {
    char buffer[1000];
    char *pos;

    pos = strstr(st1, st2); // Find the first occurrence of st2 in st1
    if (pos != NULL) {
        int len1 = pos - st1; // Length before the match
        int len2 = strlen(st2);

        // Copy the part before st2
        strncpy(buffer, st1, len1);
        buffer[len1] = '\0';

        // Add st3 and the rest of st1 after st2
        sprintf(buffer + len1, "%s%s", st3, pos + len2);

        printf("Xau goc sau khi duoc thay the: '%s'\n", buffer);
    } else {
        printf("Xau '%s' khong co trong xau '%s'\n", st2, st1);
    }
}

int main() {
    char st1[1000];
    char st2[100];
    char st3[100];

    printf("Nhap xau goc: ");
    fgets(st1, sizeof(st1), stdin);
    st1[strcspn(st1, "\n")] = '\0'; // Remove trailing newline

    printf("Nhap xau con cu: ");
    fgets(st2, sizeof(st2), stdin);
    st2[strcspn(st2, "\n")] = '\0'; // Remove trailing newline

    printf("Nhap xau con moi: ");
    fgets(st3, sizeof(st3), stdin);
    st3[strcspn(st3, "\n")] = '\0'; // Remove trailing newline

    replace_substring(st1, st2, st3);

    return 0;
}
