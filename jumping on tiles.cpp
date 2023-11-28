#include <bits/stdc++.h>
using namespace std;
 
string s,t;
int q,n,a,b,x,m;
 
int main(){
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		t="";
		m=0;
		n=s.length();
		a=s[0];b=s[n-1];
		x=(a<b?1:-1);
		for (int i=a;i!=b+x;i+=x){
			for (int j=0;j<n;j++){
				if(i==s[j]){
					t+=to_string(j+1)+" ";
					++m;
				}
			}
		}
		cout<<abs(a-b)<<" "<<m<<endl;
		cout<<t<<endl;
	}
}
