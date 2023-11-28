#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int tc; cin>>tc;
		string s;cin>>s;
		cout<<tc<<" ";
		if(next_permutation(s.begin(),s.end())){
			cout<<s<<endl;
		}
		else {
			cout<<"BIGGEST"<<endl;
		}
	}
	return 0;
}
