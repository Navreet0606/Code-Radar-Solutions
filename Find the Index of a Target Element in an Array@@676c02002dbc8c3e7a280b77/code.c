// Your code here...
#include<stdio.h>
int main(){
    int N,T;
    int j,first;
    int count=0;
    scanf("%d",&N);
    scanf("%d",&T);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<N;j++){
        if(arr[j]==T){
            count+=0;
            first=j;
        }
    }
    if(count==0){
        printf("%d",-1);
    }
    else{
        printf("%d",first);

    }


}