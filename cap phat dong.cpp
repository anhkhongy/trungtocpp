
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	string s="ngon ngu lap trinh C++";
	stringstream ss(s);
	string tmp;
	while (ss>>tmp){
		cout<<tmp<<endl;
	}
}

