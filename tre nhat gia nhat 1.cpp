#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person{
	string ten,d,m,y;
};
bool cmp(person a,person b){
	if(a.y!=b.y)return a.y<b.y;
	if(a.m!=b.m)return a.m<b.m;
	return a.d<b.d;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	person a[n];
	
	for (int i=0;i<n;i++){
		cin>>a[i].ten;
		
		string s;
		cin>>s;
		stringstream ss(s);
		getline(ss,a[i].d,'/');
		getline(ss,a[i].m,'/');
		getline(ss,a[i].y,'/');
	}
	sort(a,a+n,cmp);
	cout<<a[n-1].ten<<endl;
	cout<<a[0].ten;
	return 0;
}
