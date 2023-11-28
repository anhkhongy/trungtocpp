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
		long long tong=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			tong+=a[i];
		}
		int cnt=1;
		bool ok=false;
		for (int i=0;i<n;i++){
			if(a[i]!=0){
				ok=true;
			}
			if(a[i]>(tong-a[i]+1)){
				cnt+=a[i]-(tong-a[i]+1);
			}
		}
		if(!ok){
			cout<<"0\n";
		}
		else cout<<cnt<<"\n";
	}
	return 0;
}
