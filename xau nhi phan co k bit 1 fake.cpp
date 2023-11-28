#include <bits/stdc++.h>
using namespace std;
/* run this progra using the console pauser or add your own getch, system("pause") or input loop */
int n,k;
int x[100];
void display(){
	for (int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;
}
void Try(int i){
	for (int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			int cnt=0;
			for (int i=1;i<=n;i++){
				if(x[i]==1){
					cnt++;
				}
			}
			if(cnt==k){
				display();
			}
		}
		else Try(i+1);
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}
	return 0;
}
