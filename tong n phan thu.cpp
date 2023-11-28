#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	double sum=0;
	for (int i=1;i<=n;i++){
		sum=sum+1.0/i;
	}
	cout<<setprecision(4)<<fixed<<sum;
	return 0;
}
