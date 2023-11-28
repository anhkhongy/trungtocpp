#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct gd{
	string name;
	int n;
	long long a[100000];
};
void nhap(gd &x){
	getline(cin,x.name);
	cin>>x.n;
	for (int i=0;i<x.n;i++){
		cin>>x.a[i];
	}
}
int main(int argc, char** argv) {
	
	return 0;
}
