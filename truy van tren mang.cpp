#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	map<int,int> mp;
	for (int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	int q;
	cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		if(x==1){
			mp[y]++;
		}
		else if(x==2){
			mp[y]--;
		}
		else if(x==3){
			if(mp[y]>0){
				cout<<"YES\n";
			}
			else {
				cout<<"NO\n"
			}
		}
	}
	return 0;
}
