#include<iostream>
using namespace std;
int main(){
	int t,k,n,i;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(i=1;i<=n;i++) 
			cout<<min(1+i*(i - 1) / 2,k-n+i)<<" ";
		    cout<<"\n";
	}
	return 0; 
}
