#include <bits/stdc++.h>
using namespace std;
int prime[1000001];
void solve(){
	for (int i=0;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for (int i=2;i<=1000;i++){
		if(prime[i]){
			int k=i;
			while(i*k<=1000000){
				prime[i*k]=0;
				++k;
			}
		}
	}
} 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*neu muon sang so nguuyen to khong vuot qua n can khoi tao manr co kich thuoc n+1(n<10^7)*/
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		solve();
		int n;
		cin>>n;
		bool ok=false;
		for (int i=2;i<=n/2;i++){
			if(prime[i]){
				if(prime[n-i]){
					cout<<i<<" "<<n-i<<endl;
					ok=true;
					break;
				}
			}
		}
		if(!ok){
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
