// Your code here...
#include<stdio.h>
int main(){
    int N,T;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&T);
    for(int j=0;j<N;j++){
        int sum=0;
        for(int k=j+1;k<N;k++){
            if(arr[j]+arr[k]==T){
                printf("%d %d\n",arr[j]);
            }

        }

    }

}