#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int hoare(int a[],int l,int r){
	int pivot=a[l];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			++i;
		}while(a[i]<pivot);
		do{
			--j;
		}while(a[j]>pivot);
		if(i<j){
			
			swap(a[i],a[j]);
		}
		else return j;
	}

}
void hoaresort(int a[],int l,int r){
	if (l>=r)return ;
	int p=hoare(a,l,r);
	hoaresort(a,l,p);
	hoaresort(a,p+1,r);
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	hoaresort(a,0,n-1);
	for (int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
