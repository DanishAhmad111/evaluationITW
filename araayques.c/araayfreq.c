#include<stdio.h>

int freq(int arr[], int size, int tgt){
       int count=0;
  for (int i=0;i<size;i++){
       if(arr[i]==tgt){
        count++;
       }
  }
      return count;

}

int Max(int arr[],int size){
        int temp=arr[0];
        for(int i=0;i<size;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
        }
return temp;
}

int smax(int arr[],int size,int max){
        int temp=arr[0];
        for(int i=0;i<size;i++){
            if(arr[i]==max){
                continue;
            }
        if(arr[i]>temp){
            temp=arr[i];
        }
        }

return temp;
}

int main(){

int n,target;

printf("Enter Size of array");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

int max=Max(arr,n);
// printf("Enter the target element");
// scanf("%d",&target);
// int result=freq(arr,n,target);
int result=smax(arr,n,max);

printf("second maximum element is %d",result);
    return 0;
}