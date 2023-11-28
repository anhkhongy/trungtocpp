#include <bits/stdc++.h>
#include <set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int b=n%10;n=n/10;
		set<int> s;
		while (n>0){
			int a=n%10;
			s.insert(abs(b-a));
			b=a;
			n=n/10;
		}
		if (*s.begin()==1&&s.size()==1){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
