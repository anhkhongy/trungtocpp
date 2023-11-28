#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		long long cnt=0;
		map<int,int> mp;
		for (int i=1;i<=n;i++){
			cin>>a[i];
			cnt+=mp[a[i]-i]++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
