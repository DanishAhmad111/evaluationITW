#include<stdio.h>

int bs(int arr[],int key,int n ){
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    while(s<e){

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }

        else {
            s=mid+1;
        }
        mid=(s+e)/2;
   
    }
    return -1;
}




int main(){

int arr[]={2,43,5,6,9};
int key;
scanf("%d",&key);

int n=sizeof(arr)/sizeof(arr[0]);


int result=bs( arr,key,n);

if(result == -1){
    printf("Element not found");
}
else{
    printf("element found at %d",result);
}
    return 0;
}