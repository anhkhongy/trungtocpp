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
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		bool ok=true;
		int k=max_element(a,a+n)-a;
		for (int i=0;i<k;i++){
			if(a[i]>a[i+1]){
				ok=false;
			}
		}
		for (int i=k;i<n-1;i++){
			if(a[i]<a[i+1]){
				ok=false;
			}
		}
		if(!ok){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	} 
	return 0;
}
