#include<cstdio>
#include<algorithm>
 
int main(){
	int _;scanf("%d",&_);
	while(_--){
		int n,mn,fst;scanf("%d%d",&n,&fst);mn=fst;for(int i=1,x;i<n;++i)scanf("%d",&x),mn=std::min(mn,x);
		puts(fst==mn?"Bob":"Alice");
	}
}
