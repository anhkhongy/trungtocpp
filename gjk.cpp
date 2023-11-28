#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int timkiem(int a[],int n,int x){
	for (int i=0;i<n;i++){
		if (a[i]==x){
			return 1;
		}
	}
	return 0;
}
int main(int argc, char** argv) {
	int n,x;cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<timkiem(a,n,x)<<endl;
	return 0;
}
