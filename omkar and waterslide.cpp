#include<bits/stdc++.h>
using namespace std;int a[3333333];int main(){int t;cin>>t;while(t--){int n;cin>>n;for(int i=1;i<=n;i++)cin>>a[i];long long ans=0;for(int i=1;i<=n;i++)ans+=max(0,a[i-1]-a[i]);cout<<ans<<'\n';}return 0;}

