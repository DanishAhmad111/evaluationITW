#include<stdio.h>



void selectionsort(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i;j<n;j++){
      //find minimum
    }
}



}



void bubblesort(int arr[],int n){
for (int i=n-1;i>=1;i--){
    for(int j=0;j<=i-1;j++){
         if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
         }

    }
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


      bubblesort(arr,n);
    // selectionsort(arr,n);
    for(int i=0;i<n;i++){

        printf(" %d", arr[i]);

    }

    return 0;
}