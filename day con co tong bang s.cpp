#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<bool> dp(s+1,false);
		dp[0]=true;
		for (int i=0;i<n;i++){
		
			for (int j=s;j>=a[i];j-- ){
				if(dp[j-a[i]]==true){
					dp[j]=true;;
				}
			}
		}
		if(dp[s]){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
