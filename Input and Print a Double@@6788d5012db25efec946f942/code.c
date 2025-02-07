#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float i;
    scanf("%f",&i);
    printf("You entered: %.4f",i);
    return 0;
}