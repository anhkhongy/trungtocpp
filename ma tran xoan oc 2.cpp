#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n][m],b[n*m];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int h1=0,h2=n-1,c1=0,c2=m-1,cnt=0;
		while(h1<=h2&&c1<=c2){
			if(h1<=h2){
			
			for (int i=c1;i<=c2;i++){
				b[cnt]=a[h1][i];
				++cnt;
				
			}
			h1++;}
			if(c1<=c2){
			
			for (int i=h1;i<=h2;i++){
				b[cnt]=a[i][c2];
				++cnt;
			}
			c2--;}
			if(h1<=h2){
				for (int i=c2;i>=c1;i--){
					b[cnt]=a[h2][i];
					++cnt;
				}
				h2--;
			}
			
			if(c1<=c2){
				for (int i=h2;i>=h1;i--){
					b[cnt]=a[i][c1];
					++cnt;
				}
				c1++;
			}
			
		}
		cout<<b[k-1]<<endl;
	}
	return 0;
}
