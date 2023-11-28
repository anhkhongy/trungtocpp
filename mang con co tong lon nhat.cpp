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
		int s=0;
		int ma=INT_MIN;
		for (int i=0;i<n;i++){
			s+=a[i];
			ma=max(ma,s);
			if(s<0)s=0;
		}
		cout<<ma<<endl;
	}
	return 0;
}
