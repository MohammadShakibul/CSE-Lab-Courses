#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isValidString(const char *str) {
    int length = strlen(str);
    int i = 0;


    while (str[i] == 'a') {
        i++;
    }


    if (str[i] != 'b') {
        return false;
    }
    i++;


    if (str[i] != 'c') {
        return false;
    }


    while (str[i] == 'c') {
        i++;
    }


    return (i == length);
}

int main() {
    char str[100];


    printf("Enter a string: ");
    scanf("%s", str);


    if (isValidString(str)) {
        printf("Valid string!\n");
    } else {
        printf("Invalid string.\n");
    }

    return 0;
}


