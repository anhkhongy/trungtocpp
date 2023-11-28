#include <bits/stdc++.h>
using namespace std;
int t,x,a;
 
int main() {
	cin>>t;
	while (t--) {
		cin>>x;
		for (a=0; x>0; ) x-=++a;
		printf("%d\n",x==-1?a+1:a);
	}
}
