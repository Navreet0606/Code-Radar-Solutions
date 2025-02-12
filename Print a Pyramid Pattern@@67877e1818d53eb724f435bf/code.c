// Your code here...
#include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    i=N;
    for(N=1;N<=i;N++)
    {
        for(j=1;j<=i-N;j++)
        {
            printf(" ");
        }
        for(int a=1;a<=2N-1;a++)
        {
            printf("*");
        }
        printf("\n");
    }
}