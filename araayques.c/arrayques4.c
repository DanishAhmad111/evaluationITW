#include<stdio.h>




void frequency(int arr[],int n){
    int brr[n];
    int count=0;  
    int j=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
         if(arr[i]==arr[j]){
            count++;
         }
         store(count,n,brr);
      count=0;
    }
  for(int i=0;i<n;i++){

        printf(" %d", brr[i]);

    }
}



int main(){

int n;
    printf("enter size of array");
    scanf("%d",&n);

int arr[n];


    for(int i=0;i<n;i++){

        scanf(" %d", &arr[i]);

    }
frequency( arr, n );
   
 

    return 0;
}