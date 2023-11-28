#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n/2;i++){
			cout<<n-i+1<<' '<<i<<" ";
		}
		if(n%2)cout<<n/2+1;
		cout<<endl;
	}	
}
