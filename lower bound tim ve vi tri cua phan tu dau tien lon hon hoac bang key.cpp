#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	auto it=lower_bound(a,a+n,x);
	cout<<*it<<endl;
	return 0;
}
