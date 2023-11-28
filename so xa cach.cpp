#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int x[11];
void init(){
	for (int i=1;i<=n;i++){
		x[i]=i;
	}
}
void next(){
	int i=n-1;
	while(i>=1&&x[i]>x[i+1]){
		--i;
	}
	for (int j=n;j>=i+1;j--){
		if(x[j]>x[i]){
			swap(x[j],x[i]);
			break;
		}
	}
	reverse(x+i+1,x+n+1);
}
bool checkFinal(){
	for (int i=1;i<=n;i++){
		if(x[i]!=n-i+1){
			return false;
		}
	}
	return true;
}
bool check(){
	for (int i=2;i<=n;i++){
		if(abs(x[i]-x[i-1])==1){
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		init();
		while(!checkFinal()){
			if(check()){
				for (int i=1;i<=n;i++){
					cout<<x[i];
				}
				cout<<endl;
			}
			next();
		}
		cout<<endl;
	}
	return 0;
}
