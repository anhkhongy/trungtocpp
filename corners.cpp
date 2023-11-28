#include<iostream>
using namespace std;
int mp[505][505];
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int sum=0;
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			scanf("%1d",&mp[i][j]);
			if(mp[i][j]) sum++;
		}
		int minn=1e9;
		for(int i=0;i<n-1;i++)
		for(int j=0;j<m-1;j++)
		{
			int cnt=mp[i][j]+mp[i+1][j]+mp[i][j+1]+mp[i+1][j+1];
			minn=min(minn,max(1,cnt-1));
		}
		if(sum==0) printf("0");
		else printf("%d",sum-minn+1);
		printf("\n");
	}
}
