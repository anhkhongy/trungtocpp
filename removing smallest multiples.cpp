#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	int n;
	cin>>n;
	int a[n+1];
	string s;
	cin>>s;
	int b[100001];
	int cnt=0;
	for (int i=1;i<=n;i++){
		a[i]=s[i-1]-'0';
		if(a[i]==0){
			b[cnt++]=i;
		}
	}
	
	
	int tong=0;
	for (int i=0;i<cnt;i++){
		
		if(a[b[i]]==0){
			tong+=b[i];
			
		}
		int k=2;
		while(b[i]*k<=n&&a[b[i]*k]==0){
			tong+=b[i];
			a[b[i]*k]=1;
			++k;
		}
	}
	cout<<tong<<endl;
	}
	return 0;
}
