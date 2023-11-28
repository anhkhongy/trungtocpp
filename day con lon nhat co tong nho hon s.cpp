#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,s;
	cin>>n>>s;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0,r;
	int ans=0;
	int sum=0;
	for(int r=0;r<n;r++){
		sum+=a[r];
		while(sum>s){
			sum-=a[l];
			++l;
			 
		}
		ans=max(ans,r-l+1);
		 
	}
	cout<<ans<<endl;
	
	return 0;
}
