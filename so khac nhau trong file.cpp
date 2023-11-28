#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream fin("DATA.in");
	int n;
	map<int,int> mp;
	while(fin>>n){
		mp[n]++;
	}
	for (auto it:mp){
		cout<<it.first<<" "<<it.second;
		cout<<endl;
	}
	return 0;
}
