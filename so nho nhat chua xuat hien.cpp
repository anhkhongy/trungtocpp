#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<int> s;
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>=0){
				s.insert(a[i]);
			}
		}
		s.insert(0);
		int tmp=0;
		for (int x:s){
			if(tmp==x)++tmp;
			else break;
		}
		cout<<tmp<<endl;
	}
	return 0;
}
