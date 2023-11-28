#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for (ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll cnt=0;
		ll fmin=0;
		ll fmax=0;
		ll max=a[0]+2*x;
		ll min=a[0]-2*x;
		for (ll i=1;i<n;i++){
			if(a[i]>max||a[i]<min){
				max=a[i]+2*x;
				min=a[i]-2*x;
				fmin=i;
				fmax=i;
				cnt++;
			}
			else {
				if(a[i]>a[fmin]){
					min=a[i]-2*x;
					fmin=i;
				}
				else if(a[i]<a[fmax]){
					max=a[i]+2*x;
					fmax=i;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
