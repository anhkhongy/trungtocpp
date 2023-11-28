#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x[100001];
int n;
bool check(){
	for (int i=1;i<=n/2;i++){
		if(x[i]!=x[n-i+1])return false;
	}
	return true;
}
void display(){
	for (int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for (int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			if(check()){
				display();
			}
		}
		else Try(i+1);
	}
}
int main(int argc, char** argv) {
	cin>>n;
	Try(1);	
	return 0;
}
