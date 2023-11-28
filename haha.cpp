#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[100],ok;
void kt(){
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
bool check(){
	int cnt=0;
	for (int i=1;i<n;i++){
		if(a[i]==1&&a[i+1]==1){
			cnt++;
		}
	}
	if(a[1]==1&&a[n]==0&&cnt==0){
		return true;
	}
	else return false;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		kt();
		while(ok){
			if(check()){
				for (int i=1;i<=n;i++){
					if(a[i]==1)cout<<"H";
					else cout<<"A";
				}
				cout<<endl;
				
			}
			sinh();
		}
	}
	return 0;
}
