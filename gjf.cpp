#include <iostream>
#include <set>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	set<string>s;
	for (int i=0;i<n;i++){
		string tmp;
		getline(cin,tmp);
		s.insert(tmp);
	}
		for (string x:s){
			cout<<x<<endl;
		}
	return 0;
}
