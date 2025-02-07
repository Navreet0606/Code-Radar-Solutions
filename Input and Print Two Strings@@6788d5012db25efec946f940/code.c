#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],str2[200];
    scanf("%c %c",&str,&str2);
    printf("%c and %c",str,str2);

    return 0;
}