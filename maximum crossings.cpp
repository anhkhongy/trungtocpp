#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int res=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++)if(a[j]>=a[i])res++;
		}
		cout<<res<<endl;
	}
}
