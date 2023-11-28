#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for (int i=0;i<n;i++){
			if(i%2==0){
				for (int j=0;j<n;j++){
					cout<<a[i][j]<<" ";
				}
			}
			else {
				for (int j=n-1;j>=0;j--){
					cout<<a[i][j]<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

