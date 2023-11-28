#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string n,m;
		cin>>n>>m;
		int f[n.size()+1][m.size()+1]={};
		for (int i=0;i<n.size();i++){
			for (int j=0;j<m.size();j++){
				if(n[i]==m[j]){
					f[i+1][j+1]=f[i][j]+1;
				}
				else {
					f[i+1][j+1]=max(f[i][j+1],f[i+1][j]);
				}
			}
		}
		cout<<f[n.size()][m.size()]<<endl;
	}
	return 0;
}
