#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int L[k+1];
	for (int i=0;i<=k;i++){
		L[i]=0;
	}
	for (int i=1;i<=k;i++){
		for (int j=0;j<n;j++){
			if(i>=a[j]){
				if(L[i-a[j]]==0){
					L[i]=1;
				}
			}
		}
	}
	if(L[k]==0){
		cout<<"second";
	}
	else cout<<"first";
	return 0;
}
