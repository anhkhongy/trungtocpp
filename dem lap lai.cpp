#include <iostream> 
#include <map> 
using namespace std;
 int main(){ int t; cin>>t; while(t--){ int n,sum=0; cin>>n; int a[n]; map <int,int> mp; for(int i=0;i<n;i++){ cin>>a[i]; mp[a[i]]++; } for(int i=0;i<n;i++){ if(mp[a[i]]>1) sum+=mp[a[i]]; mp[a[i]]=0; } cout<<sum<<endl; } }
