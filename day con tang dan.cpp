#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<int> x;
	int n;
	cin>>n;
	int k;
	for (int i=1;i<n;i++){
		cin>>k;
		x.push_back(k);
	}
	x.erase(x.end()-1,x.end());
	for (int v:x){
		cout<<v<<endl;
	}
	return 0;
}
