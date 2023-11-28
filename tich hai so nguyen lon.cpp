#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void solve(string x,string y){
	int len1=x.length();
	int len2=y.length();
	int len=len1+len2;
	vector<int> a,b;
	for (int i=0;i<len1;i++){
		a.push_back(x[i]-'0');
	}
	for (int i=0;i<len2;i++){
		b.push_back(y[i]-'0');
	}
	vector<vector<int>> v(len2);
	int index=0;
	for (int i=len2-1;i>=0;i--){
		int t=0,nho=0;
		while(t<index){
			v[index].push_back(0);
			++t;
		}
		for (int j=len1-1;j>=0;j--){
			int tmp=(a[j])*(b[i])+nho;
			v[index].push_back(tmp%10);
			nho=tmp/10;
		}
		if(nho!=0){
			v[index].push_back(nho);
		}
		while(v[index].size()<len){
			v[index].push_back(0);
		}
		reverse(v[index].begin(),v[index].end());
		++index;
		
	}
	
	int du=0;
	string ans="";
	for (int i=v[0].size()-1;i>=0;i--){
		int sum=du;
		for(int j=0;j<v.size();j++){
			sum+=v[j][i];
			
		}
		
		ans=char(sum%10+'0')+ans;
		du=sum/10;
	}
	if(du!=0){
		ans=char(du+'0')+ans;
	}
	char mu=ans[ans.length()-1];
	ans.erase(ans.length()-1,1);
	while(ans[0]=='0'){
		ans.erase(0,1);
	}
	ans=ans+mu;
	cout<<ans<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		solve(x,y);
	}
	return 0;
}
