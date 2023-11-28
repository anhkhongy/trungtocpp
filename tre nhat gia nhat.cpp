#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ng{
	string ten;
	string ns;
};
bool cmp(ng a,ng b){
	reverse(a.ns.begin(),a.ns.end());
	reverse(b.ns.begin(),b.ns.end());
	return a.ns>b.ns;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	ng a[n];
	for (int i=1;i<=n;i++){
		cin>>a[i].ten;
		cin>>a[i].ns;
	}
	sort(a,a+n,cmp);
	cout<<a[1].ten<<" "<<a[1].ns<<endl;
	cout<<a[n].ten<<" "<<a[n].ns<<endl;
	return 0;
}
