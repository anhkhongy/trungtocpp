#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
int main(){int t,flag;cin>>t;while(t--){flag=0,cin>>n;for(int i=1;i<=n;i++)cin>>a[i];for(int i=n;i>2;i-=2) if(min(a[i],a[i-1])<max(a[i-2],a[i-3])){cout<<"NO"<<endl;flag=1;break;}if(flag==0)cout<<"YES"<<endl;}}
