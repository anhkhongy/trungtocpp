#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	map<int,int> mp;
	mp[1]=2;
	mp[2]=3;
	mp[3]=4;
	mp.erase(1);
	for (auto it:mp){
		cout<<it.first<<" "<<it.second;
	}
	cout<<mp.size();
}
