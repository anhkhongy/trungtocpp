#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubblesort(int a[],int n){
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	bubblesort(a,n);
	for (int x:a){
		cout<<x<<' ';
	}
	return 0;
}
