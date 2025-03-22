// Your code here...
#include<stdio.h>
int main(){
    int N;
    int sum=0;
    scanf("%d",&N);
    int arr[N];
    int arr2[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        arr2[i]=sum;
    }
    for(int j=0;j<N;j++){
        printf("%d ",arr2[j]);
    }
}