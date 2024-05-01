#include<bits/stdc++.h>
using namespace std;

void printpair(pair<int,int>p_array[],int n){
for(int i=0;i<n;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}
}


int main(){
    // pair<int,string> p;
    // cin >>p.first>>p.second;
    // cout<<p.first<<" "<<p.second<<endl;
   pair<int,int>p_array[3];
   p_array[0]={2,1};
   p_array[1]={4,3};
   p_array[2]={6,5};

for(int i=0;i<3;i++){
   swap(p_array[i].first,p_array[i].second);
}
printpair(p_array,3);

}