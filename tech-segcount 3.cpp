#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0,r;
	int dem[100001]={0};
	int cnt=0;
	long long ans=0;
	for (r=0;r<n;r++){
		dem[a[r]]++;
		if(dem[a[r]]==1)cnt++;
		while(cnt>k){
			if(dem[a[l]]==1)cnt--;
			
				dem[a[l]]--;
				++l;
			
		}
		ans+=r-l+1;
	}
	cout<<ans;
	return 0;
}
