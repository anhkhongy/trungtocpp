#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=200010;
LL l[N],r[N],d[N];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n,c,q;
		cin>>n>>c>>q;
		string s;
		cin>>s;
		d[0]=n;
		for(LL i=1;i<=c;i++)
		{
			cin>>l[i]>>r[i];
			d[i]=d[i-1]+r[i]-l[i]+1;
		}
		while(q--)
		{
			LL k;
			cin>>k;
			for(LL i=c;i>=1;i--)
			{
				if(k>d[i-1])k=k-d[i-1]+l[i]-1;
			}
			cout<<s[k-1]<<endl;
		} 
	}
}
