#include <bits/stdc++.h>
using namespace std;
/*next_permutation(a,a+n)
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a[100],ok;
void kt(){
	for (int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
		for (int j=n;j>=i+1;j--){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
				break;
			}
		}
		reverse(a+i+1,a+n+1);
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	ok=1;
	kt();
	while(ok){
		for (int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}}
	return 0;
}

