#include <bits/stdc++.h>
using namespace std;

int main() {

int T;
cin>>T;
for(int i=0;i<T;i++){
    int N,A,B,C;
    cin>>N>>A>>B>>C;
    int dish1=0;
    int dish2=0;
    int final;
    while(A!=0 || B!=0){
       A= A-1;
       B=B-1;
       dish1++;
    }
    while(B!=0 || C!=0){
        B=B-1;
        C=C-1;
        dish2++;
    }
    final=dish1+dish2;
    if(final==N){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


}
