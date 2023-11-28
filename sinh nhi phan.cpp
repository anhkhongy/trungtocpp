#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[100],ok/*bien kiem tra xem da den cau hinh cuoi cung hay chua*/;
void ktao(){
	for (int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
		a[i]=1;
	}
}
int main(int argc, char** argv) {
	cin>>n;
	ktao();
	int ok=1;
	while(ok){
		for (int i=1;i<=n;i++){
			if(a[i])cout<<'B';
			else cout<<'A';
			
		}
		cout<<' ';
		sinh();
	}
	return 0;
}
