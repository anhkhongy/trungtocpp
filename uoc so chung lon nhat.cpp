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
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int> v;
		v.push_back(a[0]);
		for (int i=0;i<n-1;i++){
			int tmp=a[i]*a[i+1]/__gcd(a[i],a[i+1]);
			v.push_back(tmp);
		}
		v.push_back(a[n-1]);
		for (int x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
