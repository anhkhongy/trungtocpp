#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	map<int,int> mp;
	int ma=0;
	for(int i=2;i<=n;i++){
		int tmp=i;
		for (int j=2;j<=sqrt(i);j++){
				while(tmp%j==0){
					mp[j]++;
					tmp/=j;
					ma=max(ma,j);
				}
		}
		if(tmp>1){
			mp[tmp]++;
			ma=max(ma,tmp);
		}
	}
	for (auto it:mp){
		if(it.first!=ma){
			cout<<it.first<<"^"<<it.second<<" * ";
		}
		else cout<<it.first<<"^"<<it.second;
	}
	return 0;
}
