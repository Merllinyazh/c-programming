#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];

   char str[]="HEfgj" 

    for(int i = 0; i < strlen(str); i++){
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    printf("Converted string: %s\n", str);

    return 0;
}

