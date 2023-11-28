#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream fin("DATA.in");
	int n,m;
	fin>>n>>m;
	int a[n],b[m];
	set<int> s1,s2;
	for(int i=0;i<n;i++){
		fin>>a[i];
		s1.insert(a[i]);
	}
	for (int i=0;i<m;i++){
		fin>>b[i];
		if(s1.find(b[i])!=s1.end()){
			s2.insert(b[i]);
		}
	}
	for (int i:s2){
		cout<<i<<" ";
	}
	return 0;
}
