#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int a[100];
void init(){
	for (int i=1;i<=n;i++){
		a[i]=1;
	}
}
void genNext(){
	int i=n;
	while(a[i]==0){
		--i;
	}
	if((a[i]-a[i-1])<=1){
		a[i-1]=a[i-1]+a[i];
		a[i]=0;
	}
	else {
		int t=a[i]+a[i-1];
		a[i-1]+=1;
		int m=t/a[i-1];
		int du=t%a[i-1];
		int l=i-1;
	    for (int j=1;j<=m;j++){
	    	a[l]=a[i-1];
	    	++l;
		}
		a[l-1]=a[l-1]+du;
	}
}
void display(){
	for (int i=1;i<=n;i++){
		if(a[i]!=0){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
bool check(){
	if(a[1]==n){
		return true;
	}
	return false;
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
