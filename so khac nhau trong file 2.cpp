#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream fin("DATA.in");
	int s;
	map<int,int> mp;
	while(fin>>s)mp[s]++;
	for (auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
	return 0;
}
