#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeDigits(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (!isdigit((unsigned char)*src)) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

void standardizeString(char *str) {
    char *src = str, *dst = str;
    int spaceFlag = 0;

    // Trim leading spaces
    while (*src && isspace((unsigned char)*src)) src++;

    while (*src) {
        if (isspace((unsigned char)*src)) {
            spaceFlag = 1;
        } else {
            if (spaceFlag) {
                *dst++ = ' ';
                spaceFlag = 0;
            }
            *dst++ = *src;
        }
        src++;
    }

    // Trim trailing spaces
    *dst = '\0';
    if (dst > str && isspace((unsigned char)*(dst - 1))) {
        *(--dst) = '\0';
    }
}

int main() {
    char str[1000];

    printf("String s:");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the input
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("String s after deleting:");
    removeDigits(str);
    printf("%s\n", str);

    printf("Standardize string:");
    standardizeString(str);
    printf("%s\n", str);

    return 0;
}

