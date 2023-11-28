#include <bits/stdc++.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		char c[15];
		for (int i=0;i<15;i++){
			cin>>c[i];
		}
		double tong=10;
		if (n==101){
			for (int i=0;i<15;i++){
				if (c[i]!=a[i]){
					tong=tong-(double)(10/15);
				}
			}
		}
		else if (n==102){
			for (int i=0;i<15;i++){
				if(c[i]!=b[i]){
					tong=tong-(double)10/15;
				}
			}
		}
		cout<<setprecision(2)<<fixed<<tong<<endl;
	} 
	return 0;
}
