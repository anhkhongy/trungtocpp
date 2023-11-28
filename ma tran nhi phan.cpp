#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n][3];
	for (int i=0;i<n;i++){
		for (int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	int cnt=0;
	for (int i=0;i<n;i++){
		int b=0,c=0;
		for (int j=0;j<3;j++){
			if(a[i][j]==1)++b;
			else if(a[i][j]==0)++c;
		}
		if(b>c)++cnt;
	}
	cout<<cnt<<endl;
	return 0;
}
