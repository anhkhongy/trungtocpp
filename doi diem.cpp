#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int convert(int n){
	if(n>=450&&n<=520){
		return 7;
	}
	if(n>=525&&n<=595){
		return 8;
	}
	if(n>=600&&n<=725){
		return 9;
	}
	if(n>=730&&n<=990){
		return 10;
	}
	else return -1;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<convert(n)<<endl;
	}
	return 0;
}
