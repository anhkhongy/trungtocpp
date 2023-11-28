#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		int d=abs(n-m)/2;
		printf("%d\n",1+(n+m-d-d)/((n+m)%2==0?2:1));
		for(int i=d;i<=n+m-d;i+=(n+m)%2==0?2:1){
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
} 
