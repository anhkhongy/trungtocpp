#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		int b[n];
		cin>>s;
		for (int i=0;i<n;i++){
			cin>>b[i];
		}
		b[-1]=0;
		int l=-1,tong=0;
		for (int i=0;i<n;i++){
			if(s[i]=='0'){
				l=i;
			}
			else if(s[i]=='1'){
				tong+=max(b[i],b[l]);
				if(b[i]<b[l]){
					l=i;
				}
			}
		}
		cout<<tong<<endl;
	}
	return 0;
}
