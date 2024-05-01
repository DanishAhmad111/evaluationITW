#include<stdio.h>

int main(){

int n,m;
printf("Enter size of array");
scanf("%d %d",&m,&n);
int arr[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("Enter elements %d %d ",i,j);
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d",arr[i][j]);
        printf("\t");
    }
    printf("\n");
}

    return 0;
}