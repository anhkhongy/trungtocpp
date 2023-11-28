#include <iostream>
#include <map>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	map<int,int> mp;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int x;
		cin>>x;
		mp[x]++;
	}
	for(auto p:mp){
		cout<<p.first<<' '<<p.second<<endl;;
	}
	return 0;
}
