#include <bits/stdc++.h>
#include <set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	set<int> s;
	s.insert(200);
	s.insert(200);
	s.insert(300);
	s.insert(100);
	/*if (s.count(100)!=0){
		cout<<"found";
	}*/
	/*if (s.find(100)!=s.end()){
		cout<<"tim thay";
	}*/
	/*s.erase(100);
	cout<<s.size();*/
	/*for(int x:s){
		cout<<x<<endl;
	}*/
	cout<<*s.begin()<<endl;
	return 0;
}
