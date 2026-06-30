#include <stdio.h>

int main() {
    char str[150];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);

    return 0;
}