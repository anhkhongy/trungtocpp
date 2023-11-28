#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k;
int x[100];
void init(){
	for (int i=1;i<=k;i++){
		x[i]=i;
	}
}
void next(){
	int i=k;
	while(i>0&&x[i]==n-k+i){
		--i;
	}
	x[i]++;
	for (int j=i+1;j<=k;j++){
		x[j]=x[j-1]+1;
	}
}
void display(){
	for (int i=1;i<=k;i++){
		cout<<char(65+x[i]-1); 
	}
	cout<<endl;
}
bool check(){
	for (int i=1;i<=k;i++){
		if(x[i]<n-k+i)return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		while(!check()){
			display();
			next();
		}
		display();
	}
	return 0;
}
