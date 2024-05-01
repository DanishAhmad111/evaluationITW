#include<stdio.h>



void Sort(int arr[],int size){
int count=0;
    for(int i=0;i<size;i++){
        if(arr[i+1]>arr[i]){           
            count++;    
        }
    }
    if(count==size){
        printf("sorted");
    }
    else{
        printf("Not sorted");
    }

}


int Duplicate(int arr[],int size){
 int i=0;
    for(int j=0;j<size;j++){
      if(arr[i] != arr[j]){
        arr[i+1]=arr[j];
        i++;
      }

    }
 return i+1;

}



int main(){

int n;
    printf("enter size of array");
    scanf("%d",&n);

int arr[n];

    for(int i=0;i<n;i++){

        scanf("  %d", &arr[i]);

    }

//  Sort( arr, n);

int k= Duplicate( arr,n);

for(int i=0;i<k;i++){

        printf(" %d", arr[i]);

    }
    return 0;
}