#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long t,ii,i,n,j,ans,q,a,s[200001];
int main(int argc, char** argv) {
	scanf("%lld",&t);
	for(ii=1;ii<=t;ii++)
	{
	  scanf("%lld",&n); 
	  ans=0;
      for(i=1;i<=n;i++)  
	  {
	  	scanf("%lld",&a);
	  	s[i]=s[i-1]+(a<i);
	  	if(a<i&&a>=1) ans=ans+s[a-1];
	  }
 
	  printf("%lld\n",ans);
	} 		
	return 0;
}
