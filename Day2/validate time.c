#include <stdio.h>

int main() {
    int hh, mm;
    printf("Enter time (HH:MM): ");
    scanf("%d:%d", &hh, &mm) ;
    if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59)
        printf("Valid Time\n");
    else
        printf("Invalid Time\n");

    return 0;
}
