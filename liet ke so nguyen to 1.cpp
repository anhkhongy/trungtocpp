#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	if(n==0||n==1)return false;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int a,b;
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	for (int i=a;i<=b;i++){
		if(snt(i)){
			cout<<i<<' ';
		}
		
	}
	return 0;
}
