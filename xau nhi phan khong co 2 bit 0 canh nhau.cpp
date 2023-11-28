#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[10000];
void Try(int i){
	for (int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			for (int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else Try(i+1);
	}
}
int main(int argc, char** argv) {
	
	cin>>n;
	Try(1);
	return 0;
}
