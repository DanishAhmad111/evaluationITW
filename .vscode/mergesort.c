#include<stdio.h>

void merge(int arr[],int low,int mid,int high){
int size=high-low+1;
int temp[size];
int ind=0;

int l=low;
int r=mid+1;

while(l<=mid && r<=high){
if(arr[l]<=arr[r]){
    temp[ind]=arr[l];
    l++;
}
else{
    temp[ind]=arr[r];
    r++;
}
ind++;
}
 while(l<=mid){
        temp[ind]=arr[l];
        ind++;
        l++;
    }
    while(r<=high){
        temp[ind]=arr[r];
        ind++;
        r++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    
}






void ms(int arr,int low,int high){

    int mid=(low+high)/2;
if(low<high){
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
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

ms(arr,0,n-1);

for(int i=0;i<n;i++){ 
        printf(" %d", arr[i]);
    }

}