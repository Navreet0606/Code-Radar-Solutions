// Your code here...
#include<stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d",&N);
    int arr[N];
    int nav[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i]%10;
        arr[i]/10;
        nav[i]=sum;
        printf("%d",nav[i]);

        }
    }

}