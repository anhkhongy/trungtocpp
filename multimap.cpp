#include <iostream>
#include <map>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	multimap<int,int>mp;
	mp.insert({1,100});
	mp.insert({2,200});
	mp.insert({1,0});
	for (auto it:mp){
		cout<<it.first<<' '<<it.second<<endl;
	}
	return 0;
}
