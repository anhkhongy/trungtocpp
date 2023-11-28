#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int N=200005;
int n,m,f[N],t,x;
long long a,b;
int main(int argc, char** argv) {
	cin>>t;
	for(;t--;){
		scanf("%d%d",&m,&n);
		for(int i=1;i<=n;i++)scanf("%d",&x),f[x]++;
		int l=1,r=n,mid;
		while(l<=r){
			mid=l+r>>1;a=b=0;
			for(int i=1;i<=m;i++)if(mid<=f[i])a+=f[i]-mid;else b+=(mid-f[i])/2;
			if(a>b)l=mid+1;
			else r=mid-1;
		}
		printf("%d\n",l);
		for(int i=1;i<=m;i++)f[i]=0;
	}
}
