#include<stdio.h>

void rotatearray(int arr[],int size,int d){
  
int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<size;i++){
        arr[i-d]=arr[i];
    }
    for(int i=size-d;i<size;i++){
        arr[i]=temp[i-(size-d)];
    }

}



int main(){

int n,d;
    printf("enter size of array");
    scanf("%d",&n);

int arr[n];

    for(int i=0;i<n;i++){

        scanf("  %d", &arr[i]);

    }
scanf("%d",&d);
d=d%n;

    for(int i=0;i<n;i++){

            printf("%d\t", arr[i]);

        }

rotatearray(arr, n, d);

    for(int i=0;i<n;i++){

            printf("  %d\t", arr[i]);

        }

    return 0;
}