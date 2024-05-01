#include<stdio.h>

int ptn(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot  && j>=low+1){
            j--;
        } 
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
 
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;

    return j;
}




void qs(int arr[],int low,int high){

if(low<high){
    int part=ptn(arr,low,high);

    qs(arr,low,part-1);
    qs(arr,part+1,high);

}
}

int main(){

int n;
printf("Enter size of Array");

scanf("%d",&n);

int arr[n];

    for(int i=0;i<n;i++){ 
        scanf(" %d", &arr[i]);
    }

qs(arr,0,n-1);

for(int i=0;i<n;i++){ 
        printf(" %d", arr[i]);
    }
    return 0;
}
