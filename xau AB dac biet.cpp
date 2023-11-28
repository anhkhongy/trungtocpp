#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,a[1005],ok;
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
	int dem=0,res=0;
	for (int i=1;i<=n;i++){
		if(a[i]==0){
			dem++;
		}
		else{
		
			dem=0;
		}
			if(dem>k)return false ;
			if(dem==k)++res;
	}
	return res==1;
}
int main(int argc, char** argv) {
	cin>>n>>k;
	ok=1;
	kt();
	int cnt=0;
	while(ok){
		if(check()){
			
			for (int i=1;i<=n;i++){
				if(a[i]==0)cout<<"A";
				else if(a[i]==1)cout<<"B";
			}
			cout<<endl;
		}
		sinh();
	}
	
	return 0;
}
