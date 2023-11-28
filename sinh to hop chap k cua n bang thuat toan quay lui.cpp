#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k;
int a[1000];
void inkq(){
	for (int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i){
	for (int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			inkq();
		}
		else {
			Try(i+1);
		}
	}
}
int main(int argc, char** argv) {
	cin>>n>>k;
	a[0]=0;
	Try(1);
	return 0;
}

