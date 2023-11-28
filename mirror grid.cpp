#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	int n;
	cin>>n;
	int x[n][n];
	string s1;
	for (int i=0;i<n;i++){
		cin>>s1;
		for (int j=0;j<n;j++){
			x[i][j]=s1[j]-'0';
		}
	}
	int a=0,b=n-1,c=n-1,d=0;
	int s=0;
	int cnt=0;
	while(a<c){
		for (int i=a;i<=c-1;i++){
			s=0;
			s+=x[a][i]+x[i][b]+x[c][n-1-i]+x[n-1-i][d];
			cnt+=min(abs(s-0),abs(s-4));
		}
		a++;d++;b--;c--;
	}
	cout<<cnt<<endl;
	}
	return 0;
}
