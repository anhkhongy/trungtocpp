#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,s;
	cin>>t;
	while(t--&&cin>>n>>s){
		int op=-1,a[n],c=0;
		for(int i=0,j=0;i<n;i++){
			cin>>a[i];
			c+=a[i];
			if(c>s){c-=a[j++];}
			if(c==s){op=max(op,i-j+1);}
		}
		int ans=n-op;
		if(op<s||(n-op)>n){ans=-1;}
		cout<<ans<<endl;
	}
}
