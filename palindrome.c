#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = 0;
    while(str[len] != '\0') len++;

    int is_palindrome = 1;
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

