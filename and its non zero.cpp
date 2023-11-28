#include<bits/stdc++.h>
using namespace std;
const int Y=1e6,X=20;
int k,s[X][Y],c,l,r;
int main()
{
	for(int i=0;i<X;i++)
		for(int j=1;j<Y;j++)
			s[i][j]=s[i][j-1]+(j>>i&1);
	cin>>k;
	while(k--&&cin>>l>>r)
	{
		c=0;
		for(int i=0;i<X;i++)
			c=max(c,s[i][r]-s[i][l-1]);
		cout<<r-l+1-c<<'\n';
	}
}
