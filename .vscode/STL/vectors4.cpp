#include<bits/stdc++.h>
using namespace std;


void printvec(vector<pair<int,int>>v){
    cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();i++){
cout<<v[i].first<<" "<<v[i].second;
cout<<endl;
}

}


int main(){
vector<pair<int,int>>v;


for(int i=0;i<v.size();i++){
int x,y;
cin>>x>>y;
v.push_back({x,y});
}
printvec(v);

}