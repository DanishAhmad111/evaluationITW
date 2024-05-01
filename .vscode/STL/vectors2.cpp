#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>v){
    cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";
cout<<endl;
}


}

int main(){
vector<int>v;

v.push_back(6);
v.push_back(7);
// v.pop_back();
printvec(v);
vector<int> v2=v; //O(n)
v2.push_back(99);


printvec(v2);
}