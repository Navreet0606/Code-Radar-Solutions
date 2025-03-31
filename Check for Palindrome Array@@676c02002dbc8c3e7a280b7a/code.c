// Your code here...
#include<stdio.h>
int main(){
    int N,c=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N;j++){
        if(arr[j]!=arr[N-j-1]){
            printf("NO");
            c=1;
            break;

        }

    }
    if(c==0){
        printf("YES");
    }
}