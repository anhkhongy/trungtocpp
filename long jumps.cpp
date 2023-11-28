#include<bits/stdc++.h>
using namespace std;
int i,m,n,t,a[200040],b[200040],x;
main()
{
 for(cin>>t;t--;)
 {
  cin>>n;
  for(i=m=0;i++<n;)
  {
   cin>>x;
   if(i+x<=n)b[i+x]=max(b[i+x],b[i]+x);
   m=max(m,b[i]+x);
  }
  cout<<m<<endl;
  for(i=0;i++<n;)b[i]=0;
 }
}
