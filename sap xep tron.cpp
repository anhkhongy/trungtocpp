#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void merge(int a[],int l,int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0,l=0;
	while (i<x.size()&&j<y.size()){
		if (x[i]<=y[j]){
			a[l]=x[i];++l;++i;
		}
		else {
			a[l]=y[j];++l;++j;
		}
	}
	while (i<x.size()){
		a[l]=x[i];++l;++i;
	}
	while(j<y.size()){
		a[l]=y[j];++l;++j;
	}
}
void mergesort(int a[],int l,int r){
	if (l>=r)return;
	int m=(l+r)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,m,r);
}
int main(int argc, char** argv) {
	int a[100];
	srand
	return 0;
}
