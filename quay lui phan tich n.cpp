#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[10000];
int sum=0;
void Try(int i){
	for (int j=a[i-1];j<=n-sum;j++){
		a[i]=j;
		sum+=a[i];
		if(sum==n){
			for (int j=1;j<=i;j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
		else {
			Try(i+1);
		}
		sum-=a[i];
	}
}
int main(int argc, char** argv) {
	cin>>n;
	a[0]=1;
	Try(1);
	return 0;
}
