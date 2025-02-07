#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i;
    scanf("%d",&i);
    printf("Hexadecimal: %X",i);
    printf("Octal: %o",i);
    return 0;
}