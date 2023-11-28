#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;
		int cnt=0;
		int i=1;
		multiset<int> se;
		int tmp=l;
		while(tmp<=r&&i<=n){
			if(tmp%i==0){
				se.insert(tmp);
				++i;
				tmp=l-1;
			}
			tmp++;
		}
		if(se.size()!=n){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
			for (int it:se){
				cout<<it<<" ";
			}
			cout<<endl;	
		}
	}
	return 0;
}
