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
		int cnt=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(mp[a[i]]==1){
				cnt++;
			}
			mp[a[i]]++;
		}
		int tmp=mp.size();
		cout<<(tmp+cnt+1)/2<<endl;
	}
	return 0;
}
