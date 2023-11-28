#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int res=s.find("084");
		string kkk=s.erase(res,3);
		cout<<kkk<<endl;
	}
	return 0;
}
