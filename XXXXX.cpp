#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		long long tong=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			tong+=a[i];
		}
		if(tong%x!=0){
			cout<<n<<endl;
		}
		else {
			bool ok=false;
			int k=0;
			int l=0,r=n-1;
			while(l<r){
				if(a[l]%x!=0||a[r]%x!=0){
					k=l-0+1;
					ok=true;
					break;
				}
				else {
					l++;
					r--;
				}
			}
			if(!ok){
				cout<<"-1"<<endl;
			}
			else {
				cout<<n-k<<endl;
			}
		}
	}
	return 0;
}
