#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s=0,i;
		vector<long long> v(n);
		for (auto &i:v){
			cin>>i;
			s+=i;
			i*=n;
		}
		map<long long,int> cnt;
		long long ans=0;
		for (auto &i:v){
			ans+=cnt[s-i];
			cnt[i-s]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
