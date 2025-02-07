  #include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    int a;
    scanf("%d",&a);
    printf("You entered:%d\n",a);
    return 0;
}