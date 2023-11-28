#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		int sum=0,max=0;
		for (int i=0;i<n;i++){
			int tong=0;
			for (int j=0;j<n;j++){
				cin>>a[i][j];
				sum+=a[i][j];
				tong+=a[i][j];
			}
			if(tong>max){
				max=tong;
			}
		}
		for (int i=0;i<n;i++){
			int t=0;
			for (int j=0;j<n;j++){
				t+=a[j][i];
			}
			if(t>max){
				max=t;
			}
		}
		cout<<n*max-sum<<endl;
		
	}
	return 0;
}
