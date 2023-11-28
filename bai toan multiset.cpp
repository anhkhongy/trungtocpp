#include <iostream>
#include <set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int &x:a){
		cin>>x;
	}
	multiset<int> ms;
	for(int i=0;i<k;i++){
		ms.insert(a[i]);
	}
	for (int i=k;i<n;i++){
		cout<<*ms.rbegin()<<' ';
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout<<*ms.rbegin();
	return 0;
}
