#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		bool ok=false;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		long long cnt=0;
		for (int i=1;i<n-1;i++){
			if(a[i]>1){
				ok=true;
			}
			if(a[i]%2==0){
				cnt+=a[i]/2;
			}
			else if(a[i]%2==1){
				cnt+=a[i]/2+1;
			}
		}
		
		if(!ok||(n==3&&a[1]%2==1)){
			cout<<"-1\n";
		}
		else {
			cout<<cnt<<"\n";
		}
	}	
	return 0;
}
