#include<bits/stdc++.h>
using namespace std;
int32_t main(){
int  t;cin>>t;while(t--){
int n,x;cin>>n;
map<int,int>m1;
for(int i=0;i<n;i++)
    cin>>x,++m1[x];
if(n<=3 or m1.size()>=3){
    cout<<n<<'\n'; continue;}
cout<<n/2+1<<'\n';}}
