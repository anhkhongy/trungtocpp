#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a;
		cin>>a;
		int ans=-1;
		for (int i=0;i<n;i++){
			if((i==0&&a[i]=='1')||(i>0&&a[i]!=a[i-1])){
				ans+=1;
			}
		}
		cout<<max(0,ans)<<endl;
	}
	return 0;
}
