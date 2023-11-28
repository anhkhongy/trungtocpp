#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define modul 1000000007
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		long long tong =0;
		for (int i=0;i<n;i++){
			long long s=1;
			for (int j=n-i-1;j>0;j--){
				s=(s*x)%modul;
			
			}
			tong+=a[i]*s;
			if(tong>modul){
				tong=tong%modul;
			}
			
		}
		cout<<tong<<endl;
	}
	return 0;
}
