#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int a,b,r=1e9;scanf("%d%d",&a,&b);
	for(int j=0;j<40;++j)
	{
		if(b+j<2)continue;
		int x=a,y=j;
		do y++;while(x/=b+j);
		r=min(r,y);
	}
	printf("%d\n",r);
}
int main()
{
	int t;scanf("%d",&t);
	while(t--) solve();
}
