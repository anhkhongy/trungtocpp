#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int tmp=a+b+c;
		if(tmp%2==0){
			cout<<"Second\n";
		}
		else cout<<"First\n";
	}
	return 0;
}
