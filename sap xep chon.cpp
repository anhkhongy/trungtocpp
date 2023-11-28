#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void selectionsort(int a[],int n){
	for (int i=0;i<n-1;i++){
		int min=i;
		for (int j=i+1;j<n;j++){
			if (a[j]<a[min]){
				min=j;
			}
		}
		int tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	selectionsort(a,n);
	for (int x:a){
		cout<<x<<' ';
	}
	return 0;
}
