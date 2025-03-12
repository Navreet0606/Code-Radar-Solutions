// Your code here...
#include<stdio.h>
int main(){
    int N,K;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&K);
    for(int j=0;j<N;j++){
        if(j<=K){
            arr[j+K]=arr[j];

        }
        else if(j>k){
            arr[j-(K+1)]=arr[j];
        }
    }
    for(int a=0;a<N;a++)
    {
        printf("%d\n",arr[a]);
    }
    
}