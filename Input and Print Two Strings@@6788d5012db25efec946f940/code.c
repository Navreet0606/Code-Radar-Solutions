#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],str2[200];
    scanf("%s %s",&str,&str2);
    printf("%s and %s",str,str2);

    return 0;
}