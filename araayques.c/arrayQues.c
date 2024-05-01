#include<stdio.h>


int findMax( int arr[],int size){

int temp=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }

}
    return temp;
}



int smax(int arr[],int size,int MaxValue){

int temp=arr[0];
 for(int i=0;i<size;i++){
     if(arr[i]==MaxValue){
        continue;
     }
        if(arr[i]>temp){
            temp=arr[i];
                       }


 }
return temp;
}



int main(){

int n;
    printf("enter size of array");
    scanf("%d",&n);

int arr[n];

    for(int i=0;i<n;i++){

        scanf(" %d", &arr[i]);

    }

int Max=findMax(arr,n);

   

int SecondMax=smax(arr,n,Max);

    printf(" Second maximum element in array is %d",SecondMax);

}