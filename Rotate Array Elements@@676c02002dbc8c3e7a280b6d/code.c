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
        if(K<=j){
            arr[j+2]=arr[j];
        }
        else if(k>j){
            arr[j-(k+1)]=arr[j];
        }
    }
    for(int a=0;a<N;a++)
    {
        printf("%d\n",arr[a]);
    }
    
}