#include<bits/stdc++.h>
using namespace std;
int main(){
    int sod=0;
int n;
cin>>n;
 while(n>0){
           int last=n%10;
           n=n/10;
           sod=sod+last;
        }
cout<<sod<<endl;
}