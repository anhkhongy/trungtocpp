#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> x;
int n;
int a[100];
vector<string> ans;
vector<vector<int>> v;
void Try(int posa){
	for (int i=posa+1;i<=n;i++){
		if(a[i]>a[posa]){
			x.push_back(i);
			if(x.size()>1){
				v.push_back(x);
			}
			Try(i);
			x.erase(x.end()-1,x.end());
		}
	}
}
int main(int argc, char** argv) {
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(0);
	for (int i=0;i<v.size();i++){
		string s="";
		for (int j=0;j<v[i].size();j++){
			s+=to_string(a[v[i][j]]);
			s+=" ";
		}
		ans.push_back(s);
	}
	sort(ans.begin(),ans.end());
	for (int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
