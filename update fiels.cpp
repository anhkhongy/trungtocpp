#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n,k,c=1,a=0;
cin>>n>>k;
while(c<k){
c*=2;
a++;
} 
a+=(n-c+k-1)/k;
cout<<a<<endl;
}
	
	return 0;
}
