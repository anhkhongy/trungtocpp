#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a[200100],b[200100];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		int j=1;
		for(int i=1;i<=n;i++){
			while(b[j]<a[i])j++;
			cout<<b[j]-a[i]<<' ';
		}
		cout<<endl;
		j=1;
		for(int i=1;i<=n;i++){
			j=max(j,i);
			while(b[j]>=a[j+1]&&j<n)j++;
			cout<<b[j]-a[i]<<' ';
		}
		cout<<endl;
	}
}
