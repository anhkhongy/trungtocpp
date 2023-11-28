#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m],cmp[n][m];
		int b[3][3];
		vector<long long> v;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++){
					cin>>b[i][j];
			}
		}
		int h=0,c=0;
		
		while(h<=n-3&&c<=m-3){
			long long sum=0;
			for (int i=h;i<h+3;i++){
				for(int j=c;j<c+3;j++){
					cmp[i][j]=a[i][j]*b[i-h][j-c];
					sum+=cmp[i][j];
				}
			}
			v.push_back(sum);
			c+=1;
			if(c==m-2){
				h++;
				c=0;
			}
		}
		long long tong=0;
		for (auto it:v){
			tong+=it;
		}
		cout<<tong<<endl;
	}
	return 0;
}
