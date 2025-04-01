// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[N];
    int index=0;
    int maxright=arr[N-1];
    arr2[index]=maxright;
    for(int j=N-2;j>0;j--){
        if(arr[j]>=maxright){
            index+=1;
            arr2[index]=arr[j];

        }

    }
    for(int k=index;k>=0;k--){
        printf("%d",arr2[k]);
    }
    

}