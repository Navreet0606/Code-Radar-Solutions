// Your code here...
#include<stdio.h>
int main(){
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    int arr[N];
    int count=0;
    for( int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==K){
            count+=1;
        }
    }
    printf("%d",count);
    
    

}