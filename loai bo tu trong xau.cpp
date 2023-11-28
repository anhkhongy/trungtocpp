#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a,b;
	getline(cin,a);
	cin>>b;
	stringstream ss(a);
	string tmp;
	while(ss>>tmp){
		if(tmp!=b){
			cout<<tmp<<" ";
		}
	}
	return 0;
}
