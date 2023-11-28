#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> mp;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		sort(a,a+n);
		int tong=0;
		int min=a[0],max=a[n-1];
		for (int i=min;i<=max;i++){
			if(mp[i]>1){
				tong+=mp[i];
			}
		}
		cout<<tong<<endl;
	}
	return 0;
}
