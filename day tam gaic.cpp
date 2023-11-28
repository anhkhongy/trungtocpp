#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		set<int> s;
		for (int i=0;i<n;i++){
			int m;
			cin>>m;
			s.insert(m);
		}
		cout<<*s.rbegin()<<endl;
	}
	return 0;
}
