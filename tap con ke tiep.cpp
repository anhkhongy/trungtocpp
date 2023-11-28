#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,a[1005];
void kt(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
	if(i==0){
		for (int j=1;j<=k;j++){
			a[j]=j;
		}
	}
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
		for (int j=1;j<=k;j++){
			cout<<a[j]<<' ';
		}
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for (int i=1;i<=k;i++){
			cin>>a[i];
		}
		kt();
	}
	return 0;
}
