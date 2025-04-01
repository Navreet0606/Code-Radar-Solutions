// Your code here...
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int N,index,j;
//     int c=0;
//     scanf("%d",&N);
//     int arr[N];
//     arr[index]=0;
//         for(int i=0;i<N;i++)
//         {
//             scanf("%d",&arr[i]);
//         }
//         for(j=0;j<N;j++){
//             if(arr[j]>arr[j+1])
//             {
//                 arr[index]=arr[j];

//             }
//             else{
//                 c=1;
//             }

            
            
            

//         }
//         if(c==1){
//             printf("-1");
//         }
//         else{

//          printf("%d",arr[N-2]);
//         }
        
        
        
//     }
#include<stdio.h>
int main(){
    int N,index,j,k;
    scanf("%d",&N);
    int arr[N];
    arr[index]=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<N;j++){
        for(k=j+1;k<N;k++){
            
            if(arr[j]>arr[k])
            {
                int temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            
            }
            }
            printf("%d",arr[j]);
    }
        
}
            

        