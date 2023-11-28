#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>k>>n;
		multiset<int> m;
		for (int i=0;i<k;i++){
			int a[n];
			for (int i=0;i<n;i++){
				cin>>a[i];
				m.insert(a[i]);
			}
		}
		for (int x:m){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
