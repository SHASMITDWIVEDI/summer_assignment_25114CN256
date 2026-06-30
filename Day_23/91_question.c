#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;
    int isAnagram = 1;
    int count1[256] = {0};
    int count2[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}