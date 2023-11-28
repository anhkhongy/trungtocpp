#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int b[n][m];
		int h1=0,h2=n-1,c1=0,c2=m-1;
		while(h1<=h2&&c1<=c2){
			if(h1<=h2){
			
			for (int i=c1;i<=c2;i++){
				if(h1==h2){
					b[h1][i]=a[h1][i];
				}
				else {
					if (i==c1){
						b[h1][i]=a[h1+1][i];
					}
					else b[h1][i]=a[h1][i-1];
				}
				
				
			}
			h1++;}
			if(c1<=c2){
			
			for (int i=h1;i<=h2;i++){
				b[i][c2]=a[i-1][c2];
			}
			c2--;}
			if(h1<=h2){
				for (int i=c2;i>=c1;i--){
					b[h2][i]=a[h2][i+1];
				}
				h2--;
			}
			if(c1<=c2){
				for (int i=h2;i>=h1;i--){
					b[i][c1]=a[i+1][c1];
				}
				c1++;
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cout<<b[i][j]<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}
