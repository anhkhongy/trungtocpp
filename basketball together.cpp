using namespace std;
#include<bits/stdc++.h>
int main(){
    int n,d,z=0,m=0;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(int i=n-1;i>=0;i--)
{m+=d/a[i]+1;
if(m>n)break;
z++;
}
cout<<z;
 
}
