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
		
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0,r=0;
		bool ok=false;
		while(l<n&&r<n){
			if(a[r]-a[l]<x){
				++r;
			}
			else if(a[r]-a[l]>x){
				++l;
			}
			else if(a[r]-a[l]==x){
				ok=true;
				break;
			}
		}
		if(ok){
			cout<<"1"<<endl;
		}
		else cout<<"-1"<<endl;
	}
	return 0;
}
