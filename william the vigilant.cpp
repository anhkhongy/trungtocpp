#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cnt,n,m,x,i;
char s[100001],y[10];
int main(){
	scanf("%d%d%s",&n,&m,s+1);
	for(i=1;i<=n-2;i++)cnt+=s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c';
	while(m--){
		scanf("%d%s",&x,y);
		for(i=max(x-2,1);i<=min(x+2,n-2);i++)cnt-=s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c';
		s[x]=y[0];
		for(i=max(x-2,1);i<=min(x+2,n-2);i++)cnt+=s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c';
		printf("%d\n",cnt);
	}
}
