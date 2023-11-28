#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,int> a[101],ans[10001];
		for (int i=1;i<=n;i++){
			cin>>a[i].first;
		}
		for (int i=1;i<=n;i++){
			cin>>a[i].second;
		}
		int cnt=0,t=0;
		for (int i=1;i<n;i++){
			for (int j=i+1;j<=n;j++){
				if(a[i]>a[j]){
					ans[++t]={j,i};
					swap(a[i],a[j]);
				}
			}
		}
		for (int i=1;i<n;i++){
			if(a[i].first<=a[i+1].first&&a[i].second<=a[i+1].second){
				cnt++;
			}
		}
		if(cnt==n-1){
			cout<<t<<endl;
			for (int i=1;i<=t;i++){
				cout<<ans[i].first<<" "<<ans[i].second;
				cout<<endl;
			}
		}
		else cout<<"-1"<<endl;
	}
	return 0;
}
