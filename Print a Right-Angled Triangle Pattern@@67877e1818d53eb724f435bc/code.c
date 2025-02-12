// Your code here...
#include<stdio.h>
int main(){
    int N,j;
    scanf("%d",&N);
    int a=N;
    for(N=1;N<=a;N++)
    {
        for(j=1;j<=N;j++){
            printf("* ");
        }
        printf("\n");
    }
}