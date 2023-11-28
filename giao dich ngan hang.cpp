#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		getline (cin,s);
		int n;
		cin>>n;
		long long a[n];
		long long tong=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<0){
				tong+=a[i];
			}
		}
		
		if(tong<=-100000000){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
