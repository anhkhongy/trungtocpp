#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		int tong[100001];
		int c[n];
		for (int i=0;i<n;i++){
			c[i]=0;
		}
		if(a[0]!=b[0]){
			tong[0]=2;
		}
		else if(a[0]=='0'&&b[0]=='0'){
			tong[0]=1;
		}
		else if(a[0]=='1'&&b[0]=='1'){
			tong[0]=0;
		}
		for (int i=1;i<n;i++){
			if(a[i]!=b[i]){
				tong[i]=tong[i-1]+2;
			}
			else if(a[i]=='1'&&b[i]=='1'){
				if(a[i-1]=='0'&&b[i-1]=='0'&&c[i-1]==0){
					c[i]=1;
					tong[i]=tong[i-1]+1;
				}
				else {
					tong[i]=tong[i-1];
				}
			}
			else if(a[i]=='0'&&b[i]=='0'){
				if(a[i-1]=='1'&&b[i-1]=='1'&&c[i-1]==0){
					tong[i]=tong[i-1]+2;
					c[i]=1;
				}
				else {
					tong[i]=tong[i-1]+1;
				}
			}
		}
		cout<<tong[n-1]<<endl;
	}
	return 0;
}
