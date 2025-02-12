// Your code here...
#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    for(int a=i;a>0;a--)
    {
        for(j=a;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }

}