#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		int tmp=0;
		for(int i=0;i<s.length();i++){
			int cnt[256]={0};
			int dem=0;
			for (int j=i;j<s.length();j++){
				if(cnt[s[j]]==0)dem++;
				if(dem==k){
					tmp++;
				}
				else if(dem>k){
					break;
				}
				cnt[s[j]]++;
			}
		}
		cout<<tmp<<endl;
	}
	return 0;
}
