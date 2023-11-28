#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main() {
	lli t;
	cin>>t;
	for (t;t>0;t--){
		lli n,x,s=0;
		cin>>n;
		string a="Yes";
		for (lli i=0;i<n;i++){
			cin>>x;
			if (s==0 && x!=0 && i>0) {a="No";}
			s+=x;
			if (s<0) {a="No";}
		}		
		if (s==0) cout<<a<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

