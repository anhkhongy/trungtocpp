#include <bits/stdc++.h>
using namespace std;
const int N=1e6+7,p=1e9+7;
int n,a[N],b[N],f1[N],f2[N]; bool fl[N];
int main(){
	int t;
	cin>>t;
	while(t--){
		scanf("%d",&n); int ans=1;
		for(int i=1;i<=n;i++) scanf("%d",&a[i]),f1[a[i]]=i,fl[i]=0;
		for(int i=1;i<=n;i++) scanf("%d",&b[i]),f2[b[i]]=i;
		for(int i=1;i<=n;i++){
			int x=i;
			if(!fl[x]) ans=ans*2%p; 
			while(!fl[x]){
				fl[x]=1;
				x=f2[a[x]];
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}

