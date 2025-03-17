// Your code here...
#include<stdio.h>
int main(){
    int N,odd=0,even=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
}