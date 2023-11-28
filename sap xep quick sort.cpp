#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int partition(int a[],int l,int r){
	int x=a[r];
	int i=l-1;
	for (int j=l;j<r;j++){
		if (a[j]<=x){
			++i;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
	return i;
}
void quicksort(int a[],int l,int r){
	if (l>=r)return ;
	int p=partition(a,l,r);
	quicksort(a,l,p-1);
	quicksort(a,p+1,r);
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for (int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
//quicksort can co chot day nho hon sang trai lon hon sang phai chot  
