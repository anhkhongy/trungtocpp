#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		map<int,int> mp;
		for (int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		sort(a,a+n);
		int cnt=0;
		int l=a[0];
		int r=a[n-1];
		for (int i=l;i<=r;i++){
			if(mp[i]==0)cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
