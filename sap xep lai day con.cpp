#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int l=0,r=n-1;
		while(l<r){
			if(a[l]<=a[l+1]){
				l++;
			}
			if (a[r]>=a[r-1]){
				r--;
			}
			if (a[l]>a[l+1]&&a[r]<a[r-1]){
				break;
			}
		}
		int *max=max_element(a+l,a+r+1);
		int *min=min_element(a+l,a+r+1);
		for(int i=0;i<l;i++){
			if(a[i]>*min){
				l=i;
				break;
			}
		}
		for (int j=n-1;j>=r;j++){
			if(a[j]<*max){
				r=j;
				break;
			}
		}
		cout<<l<<' '<<r;
	}
	return 0;
}
