#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool unused[11];
int x[11];
string s;
void Try(int i,int n){
	for (int j=1;j<=n;j++){
		if(unused[j]==true){
			x[i]=j;
			unused[j]=false;
			if(i==n){
			for (int j=1;j<=n;j++){
				cout<<s[x[j]-1];
			}
			cout<<" ";
			}
			else {
				Try(i+1,n);
			}
			unused[j]=true;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int n=s.length();
		for (int i=1;i<=n;i++){
			unused[i]=true;
		}
		Try(1,n);
		cout<<endl;
	}
	return 0;
}
