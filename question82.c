#include <stdio.h>

int main() {
    char str[100], temp;
    int i, a = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[a] != '\0') {
        a++;
    }
    for (i = 0; i < a/ 2; i++) {
        temp = str[i];
        str[i] = str[a - i - 1];
        str[a - i - 1] = temp;
    }
    printf("Reversed string = %s", str);

    return 0;
}