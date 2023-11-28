#include<bits/stdc++.h>
//#define ll long long;
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
  int n,q;
  cin>>n>>q;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n,greater<int>());
  for(int i=1;i<n;i++)a[i]+=a[i-1];
  while(q--){
    int x;
    cin>>x;
    if(a[n-1]<x)cout<<-1<<endl;
    else cout<<lower_bound(a,a+n,x)-a+1<<endl;
  }
}
}
