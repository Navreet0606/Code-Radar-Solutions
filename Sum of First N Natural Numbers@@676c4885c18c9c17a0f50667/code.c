// Your code here...
#include<stdio.h>
int main(){
    int N;
    int sum=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}