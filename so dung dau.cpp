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
		vector<int> v;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=-1;
		for (int i=n-1;i>=0;i--){
			if(a[i]>ans){
				v.push_back(a[i]);
				ans=a[i];
			}
		}
		reverse(v.begin(),v.end());
		for (int x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
