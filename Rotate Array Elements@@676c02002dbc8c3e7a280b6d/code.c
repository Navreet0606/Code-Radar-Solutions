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
    for(j=0;j<N;j++){
        if(K<=i){
            arr[i+2]=arr[i];
        }
        if(k>i){
            arr[i-(k+1)]=arr[i];
        }
    }
    for(int a=0;a<N;a++)
    {
        printf("%d\n",arr[i]);
    }
    
}