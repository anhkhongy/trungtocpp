#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	vector<int> v;
	int x;
	for (int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for (int i=0;i<v.size()-1;i++){
		if((v[i]+v[i+1])%2==0){
			v.erase(v.begin()+i,v.begin()+i+2);
			i=0;
		}
	}
	cout<<v.size()<<endl;
	return 0;
}
