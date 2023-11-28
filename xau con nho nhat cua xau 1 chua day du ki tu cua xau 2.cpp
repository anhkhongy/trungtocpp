#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void solve(string s1,string s2){
	
	int dem1[256]={0};
	int dem2[256]={0};
	for(int i=0;i<s2.length();i++){
		dem2[s2[i]]++;
	}
	int cnt=0,left=0,ans=INT_MAX,ind=0;
	for (int i=0;i<s1.length();i++){
		dem1[s1[i]]++;
		if(dem1[s1[i]]<=dem2[s1[i]]){
			cnt++;
		}
		if(cnt==s2.length()){
			while(dem1[s1[left]]>dem2[s1[left]]||dem2[s1[left]]==0){
				if(dem1[s1[left]]>dem2[s1[left]]){
					dem1[s1[left]]--;
				}
				left++;
			}
			if(ans>i-left+1){
				ans=i-left+1;
				ind=left;
			}
		}
		
	}
	if(ind==0){
		cout<<"-1"<<endl;
	}
	else {
		cout<<s1.substr(ind,ans)<<endl;
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s1;string s2;
		cin>>s1>>s2;
		solve (s1,s2);
		
	}
	return 0;
}
