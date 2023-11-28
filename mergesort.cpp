#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000001];
void merge(int a[],int l,int m,int r){
	vector<int> b(a+l,a+m+1);
	vector<int> c(a+m+1,a+r+1);
	int i=0,j=0;
	while(i<b.size()&&j<c.size()){
		if(b[i]<=c[j]){
			a[l]=b[i];
			++l;++i;
		}
		else {
			a[l]=c[j];
			++l;++j;
		}
	}
	while(i<b.size()){
		a[l]=b[i];
		++l;++i;
	}
	while(j<c.size()){
		a[l]=c[j];
		++l;++j;
	}
}
void Mergesort(int a[],int l,int r){
	if(l>=r)return;
	int m=(l+r)/2;
	Mergesort(a,l,m);
	Mergesort(a,m+1,r);
	merge(a,l,m,r);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		Mergesort(a,0,n-1);
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
