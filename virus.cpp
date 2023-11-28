#include<bits/stdc++.h>
using namespace std;
int main(){
 
int t;
cin>>t;
while(t--){
long n,m;
cin>>n>>m;
 
long a[m];
for(int i=0;i<m;i++) cin>>a[i];
long r=0;long s=0;
vector<long> v;
sort(a,a+m);
v.push_back(a[0]+n-a[m-1]-1);
for(int i=0;i<m-1;i++) v.push_back(a[i+1]-a[i]-1);
sort(v.begin(),v.end());
for(int i=m-1;i>=0;i--){
if(v[i]<=2*r) break;
else if(v[i]-2*r ==1) {s++;r++;}
else {s+=v[i]-2*r-1;r+=2;}
 
}
cout<<n-s<<endl;
 
 
}
}
