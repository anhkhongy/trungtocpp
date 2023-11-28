#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],dem=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k){
				++dem;
			}
		}
		int min=0;
		int l=0,r=l+dem-1;
		for (int i=l;i<=r;i++){
			if(a[i]>k){
				min++;
			}
		}
		int tmp=min;
		for (int i=0,j=dem;j<n;++i,++j){
			if(a[i]>k){
				tmp--;
			}
			if(a[j]>k){
				tmp++;
			}
			if(tmp<min){
				min=tmp;
			}
		}
		
		cout<<min<<endl;
	}
	return 0;
}
