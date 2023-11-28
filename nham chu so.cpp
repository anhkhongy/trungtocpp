#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a,b;
	cin>>a>>b;
	for (int i=0;i<a.size();i++){
		if(a[i]=='6'){
			a[i]='5';
		}
	}
	for (int i=0;i<b.size();i++){
		if(b[i]=='6'){
			b[i]='5';		
		}
	}
	cout<<stoi(a)+stoi(b)<<" ";
	for (int i=0;i<a.size();i++){
		if(a[i]=='5'){
			a[i]='6';
		}
	}
		for (int i=0;i<b.size();i++){
		if(b[i]=='5'){
			b[i]='6';		
		}
	}
	cout<<stoi(a)+stoi(b);
	return 0;
}
