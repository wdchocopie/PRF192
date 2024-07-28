#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void menu(){
    printf("1. Input string\n");
    printf("2. Split string into words\n");
    printf("3. Convert string into proper form\n");
    printf("4. Remove redundant spaces\n");
    printf("5. Check valid name\n");
    printf("0. Exit\n");
}

void input_string(char str[]){
    printf("Enter string: ");
    scanf(" %999[^\n]", str);
    getchar();
}

void split_string(char str[]){
    printf("The original string: %s\n", str);

    printf("Words in the string:\n");
    char *token = strtok(str, " ");
    int count = 0;
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
        count++;
    }
    printf("Number of words: %d\n", count);
}

bool isWhiteSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

bool specialCharacter(char c) {
    return c == ',' || c == '.' || c == '(' || c == ')' 
           || c == '?' || c == ':' || c == ';' || c == '!';
}

void removeAtMid(char *s) {
    int i, j;
    int len = strlen(s);
    for (i = 0; i < len; i++) {
        if (isWhiteSpace(s[i]) && isWhiteSpace(s[i + 1])) {
            for (j = i + 1; j < len; j++) {
                s[j] = s[j + 1];
            }
            i--;
            len--;
        } else if (isWhiteSpace(s[i]) && specialCharacter(s[i + 1])) {
            for (j = i; j < len; j++) {
                s[j] = s[j + 1];
            }
            i--;
            len--;
        } else if (s[i] == '\t') {
            s[i] = ' ';
        }
    }
}

void removeAtHead(char *s) {
    int counter = 0;
    int i;
    int len = strlen(s);
    // Count leading white spaces
    for (i = 0; i < len; i++) {
        if (isWhiteSpace(s[i])) {
            counter++;
        } else {
            break;
        }
    }
    // Remove leading white spaces
    for (i = 0; i <= len - counter; i++) {
        s[i] = s[i + counter];
    }
}

void convert_string(char str[]){
    printf("The original string: %s\n", str);
    printf("The string in proper form: ");
    for (int i = 0; i < strlen(str); i++) {
        if ((i == 0 && str[i] != ' ') || (i > 0 && str[i - 1] == ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i] - 32);
            } else {
                printf("%c", str[i]);
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                printf("%c", str[i] + 32);
            } else {
                printf("%c", str[i]);
            }
        }
    }
    printf("\n");
}

void remove_redundant_spaces(char str[]){
    printf("The original string: %s\n", str);
    removeAtMid(str);
    removeAtHead(str);
    // Remove trailing white spaces
    int len = strlen(str);
    while (len > 0 && isWhiteSpace(str[len - 1])) {
        str[--len] = '\0';
    }
    printf("The string after removing redundant spaces: %s\n", str);
}

void check_valid_name(char str[]) {
    int valid = 1; // Assume name is valid initially
    for (int i = 0; i < strlen(str); i++) {
        // Check if the character is not a letter and not a white space
        if (!isalpha(str[i]) && !isspace(str[i])) {
            valid = 0; // Mark as invalid
            break;
        }
    }
    if (valid) {
        printf("Valid name\n");
    } else {
        printf("Invalid name\n");
    }
}

int main(){
    int a = 1;
    char str[1000] = ""; // Initialize the string
    while (a) {
        menu();
        int choice;
        printf("Your selection (0 -> 5): ");
        scanf("%d", &choice);
        getchar(); // Consume newline character
        switch (choice) {
            case 1:
                input_string(str);
                break;
            case 2:
                split_string(str);
                break;
            case 3:
                convert_string(str);
                break;
            case 4:
                remove_redundant_spaces(str);
                break;
            case 5:
                check_valid_name(str);
                break;
            case 0:
                a = 0;
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
