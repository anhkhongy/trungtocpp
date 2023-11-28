#include <bits/stdc++.h>
#include <set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	unordered_set<int> us;
	us.insert(100);
	us.insert(100);
	us.insert(50);
	for (int x:us){
		cout<<x<<endl;
	}
	return 0;
}
