#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		int ans=100;
		for (int i=0;i<63;i++){
			int k=0;
			long long x1=pow(2,i);
			string x=to_string(x1);
			for (int j=0;j<s.length();j++){
				if(s[j]==x[k])k++;
			}
			int ma=x.size()-k+s.size()-k;
			ans=min(ans,ma);
		}
		cout<<ans<<endl;
	}
	return 0;
}
