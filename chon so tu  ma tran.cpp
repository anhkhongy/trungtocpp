#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cin>>n>>k;
	int mt[100][100];
	int a[1005];
	for (int i=1;i<=n;i++)a[i]=i;
	vector<vector<int>> v;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>mt[i][j];
		}
	}
	do{
		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=mt[i][a[i]];
		}
		if(sum==k){
			vector<int> tmp(a+1,a+n+1);
			v.push_back(tmp);
		}
	}while(next_permutation(a+1,a+n+1));
	cout<<v.size()<<endl;
	for (auto it:v){
		for (int x:it){
			cout<<x<<' ';
		}
		cout<<endl;
	}
	return 0;
}
