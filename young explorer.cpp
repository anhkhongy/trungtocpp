#include<bits/stdc++.h>
    using namespace std;int main(){int t,n,i;cin>>t;while(t--){cin>>n;int a[n];for(i=0;i<n;i++)cin>>a[i];sort(a,a+n);int m=1,sum=0;for(i=0;i<n;i++){if(m==a[i]){sum++;m=0;}m++;}cout<<sum<<endl;}}
