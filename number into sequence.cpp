#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long m=n;
		map<int,int> mp;
		for(int i=2;i<=sqrt(n);i++){
			int cnt=0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			if(cnt!=0)
				mp[cnt]=i;
		}
		if(n!=1){
			mp[1]=n;
		}
		int ans=0;
		for (auto it:mp){
			ans=max(ans,it.first);
		}
		cout<<ans<<endl;
		long long tich=1;
		for (int i=1;i<=ans-1;i++){
			cout<<mp[ans]<<" ";
			tich*=mp[ans];
		}
		cout<<m/tich<<endl;
	}
	return 0;
}
