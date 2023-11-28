#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int s=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		sort(a,a+n);
		int s1=0;
		for (int i=0;i<k;i++){
			s1+=a[i];
		}
		int s2=0;
		int s3;
		for (int j=0;j<n-k;j++){
			s2+=a[j];
		}
		s3=min(s1,s2);
		cout<<abs((s-s3)-s)<<endl;
	}
	return 0;
}
