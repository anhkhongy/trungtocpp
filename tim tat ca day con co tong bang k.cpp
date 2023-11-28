#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,a[100],v[100];
vector<vector<int>> res;
void init(){
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		cin>>v[i];
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int sum=0;
			for (int l=1;l<=n;l++){
				if(a[l]==1){
					sum+=v[l];
				}
			}
			if(sum==k){
			vector<int> x;
			for (int l=1;l<=n;l++){
				if(a[l]==1){
					x.push_back(v[l]);
				}
			}
			res.push_back(x);
			}
		}
		else Try(i+1);
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1);
		if(res.size()==0){
			cout<<"-1"<<endl;
		}
		else {
			sort(res.begin(),res.end());
			for (auto it:res){
				cout<<"{";
				for (int x:it){
					cout<<x<<" ";
				}
				cout<<"} ";
			}
		}
	}
	return 0;
}
