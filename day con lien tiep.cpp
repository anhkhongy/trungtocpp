#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		ll sum1=0,sum2=0;
		for (int i=0;i<n;i++){
			sum2+=a[i];
			sum1=max(sum1,sum2);
			if(sum2<0){
				sum2=0;
			}
		} 
		cout<<sum1<<endl;
	}
	return 0;
}
