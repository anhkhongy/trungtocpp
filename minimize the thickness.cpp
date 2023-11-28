#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool kt(long long s[],int n,int l,long long sum){
	
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		long long sum=0;
		long long s[n];
		set<int> se;
		s[-1]=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			s[i]=s[i-1]+a[i];
		}
		
		for (int i=0;i<n;i++){
			if(sum%s[i]==0){
				int ma=i+1;
				int k=2;
				while(s[i]*k<=sum){
					long long tmp=s[i]*k;
					auto it=lower_bound(s+i+1,s+n,tmp);
					if(it==s+n){
						
					}
				}
			}
		}
	}
	return 0;
}
