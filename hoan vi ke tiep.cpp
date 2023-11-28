#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[1005];
void next(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		for (int j=1;j<=n;j++){
			cout<<j<<' ';
		}
	}
	else {
		for (int j=n;j>i;j--){
			if(a[j]>a[i]){
				swap(a[j],a[i]);
				break;
			}
		}
		reverse(a+i+1,a+n+1);
		for (int j=1;j<=n;j++){
			cout<<a[j]<<' ';
		}
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		next();
	}
	return 0;
}
