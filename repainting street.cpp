#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int c[n];
		for (int i=0;i<n;i++){
			cin>>c[i];
		}
		int y=101;
		int a=INT_MAX;
		int dem=0;
		while(y>=0){
		
		int i=0;
		while(i<n){
			if(c[i]!=y){
				dem++;
				i+=k;
			}
			else ++i;
		} 
		a=min(dem,a);
		--y;
		dem=0;
		}
		cout<<a<<endl;
	}
	return 0;
}
