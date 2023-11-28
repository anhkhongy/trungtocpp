#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[10000];
bool check(){
	if(a[1]==n){
		return true;
	}
	return false;
}
void init(){
	for (int i=1;i<=n;i++){
		a[i]=1;
	}
	cout<<endl;
}
void display(){
	for (int i=1;i<=n;i++){
		if(a[i]!=0){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
void genNext(){
	int i=n;
	while(a[i]==0){
		--i;
	}
	if(a[i]-a[i-1]<=1){
		a[i-1]+=a[i];
		a[i]=0;
	}
	else if(a[i]-a[i-1]>=2&&a[i]<((a[i-1]+1)*3)){
		a[i-1]++;
		a[i]--;
	} 
	else if(a[i]>=(3*(a[i-1]+1))){
		int cnt=a[i-1]+1;
		int tong=a[i]+a[i-1];
		int tmp=tong/cnt;
		for (int j=i-1;j<i-1+tmp;j++){
			a[j]=cnt;
		}
		if(tong%cnt==1){
			a[i-2+tmp]++;
		}
	}
}
int main(int argc, char** argv) {
	cin>>n;
	init();
	display();
	while(!check()){
		genNext();
		display();
	}
	return 0;
}
