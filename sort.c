#include<stdio.h>

void selection(int arr[],int n){

for(int i=0;i<n-1;i++){
    int min =i;
for(int j=i;j<=n-1;j++){
    if(arr[j]<arr[min]){
     min=j;
    }
   int temp=arr[min];
   arr[min]=arr[i];
   arr[i]=temp;
}

}

}
void bubble(int arr[], int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }

    }
}

void insertion(int arr[],int n){
   for(int i=0;i<n;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
j--;

    }


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

// selection(arr,n);
// bubble(arr,n);
insertion(arr,n);

 for(int i=0;i<n;i++){ 

        printf(" %d", arr[i]);

    }





    return 0;
}