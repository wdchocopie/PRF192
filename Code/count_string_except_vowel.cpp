#include <stdio.h>
#include <string.h>

int main() {
    char s[999];
    scanf("%[^\n]", s);
    
    int i, count = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}

