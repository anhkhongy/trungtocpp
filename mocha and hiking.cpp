#include<iostream>
using namespace std;
int main() { int t;cin >> t;while(t--)
{int n;cin>>n;int x=0;for(int i=1;i<=n;i++)
{int h;cin>>h;if(!h)x=i;}if(x==0)cout<<n+1<<' ';
for(int i=1;i<=n;i++)
{cout<<i<<' ';if(i==x)cout<<n+1<<' ';}
cout<<'\n';}
    
}
