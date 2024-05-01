#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char str[5];
        int countA=0;
        int countB=0;
        for(int i=0;i<5;i++){
            cin>>str[i];
        }
        for(int i=0;i<5;i++){
            if(str[i]=='A'){
                countA++;
            }
            else{
                countB++;
            }
        }
        if(countA > countB){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }

    }

}