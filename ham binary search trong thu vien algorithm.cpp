#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*bool ls(int a[n],int n,int x){
	for (int i=0;i<n;i++){
		if (a[i]==x)return true;
	}
	return false;
}*/
int main(int argc, char** argv) {
	int n,x;
	cin>>n>>x;
	vector<int> v(n) ;
	for (int i=0;i<n;i++){
		cin>>v[i];
	}
	if (binary_search(v.begin(),v.end(),x))cout<<"found";
	else cout<<"not found";
	return 0;
}
