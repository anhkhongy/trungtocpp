#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l=0,ok=0;
		while(l<n-1){
		
		for (int i=l+1;i<n;i++){
			if(a[i]==a[l]){
				ok=1;
				break;
			}
			
		}
		if(ok==1)break;
		else ++l;
		}
		if(l==n-1){
			cout<<"NO"<<endl;
		}
		else cout<<a[l]<<endl;
	}
	
	return 0;
}
