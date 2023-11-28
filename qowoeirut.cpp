#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[100001];
int calc(int i){
	return max(0,max(a[i-1],a[i+1])-a[i]+1);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(n%2==1){
			long long ans=0;
			for (int i=2;i<=n;i+=2){
				ans+=calc(i);
			}
			cout<<ans<<endl;
			continue;
		}
		else {
			long long ans=0,sum=0;
			for (int i=2;i<n;i+=2){
				sum+=calc(i);
			}
			ans=sum;
			for (int i=n-1;i>1;i-=2){
				sum-=calc(i-1)-calc(i);
				ans=min(ans,sum);
			}
			
			cout<<ans<<endl;
		}
	}
	return 0;
}
