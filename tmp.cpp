#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int i=0,j=0,k=1;
	int ans=INT_MIN;
	while(i<n-k){
		while(j<n-k){
			int sum1=0,sum2=0;
			for (int h=j;h<=j+k;h++){
				
				sum1+=a[h][h];
				sum2+=a[h][j+k-h];
			}
			cout<<sum1-sum2;
			if(ans<sum1-sum2){
				ans=sum1-sum2;
			}
			++j;
		}
		if(j==n-k){
			++i;
			j=0;
		}
		if(i==n-k){
			i=0;
			j=0;
			++k;
		}
	}
	cout<<ans;
	return 0;
}
