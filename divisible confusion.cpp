#include<stdio.h>
int main(){
	int t,n,num;scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int s=1;
		for(int i=1;i<=n;i++){
			int s2=0;
			scanf("%d",&num);
			for(int j=2;j<=i+1;j++){
				if(num%j)	{s2=1;break;}}
			s&=s2;
		}
		if(s) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
