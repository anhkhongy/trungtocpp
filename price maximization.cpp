#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int x,m=0;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>x;
			if(x/k>0){
				m+=x/k;
			}
			a[i]=x%k;
		}
		sort(a,a+n);
		int i=0,j=n-1;
		while(i<j){
			if(a[i]+a[j]<k){
				++i;
			}
			else{
				++i;
				--j;
				m++;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}
