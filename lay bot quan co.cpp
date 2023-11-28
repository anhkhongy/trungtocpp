#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int c,m;
		cin>>c>>m;
		if(c==0){
			cout<<"Second\n";
		}
		else {
			if(c<=m){
				cout<<"First\n";
			}
			else {
				int tmp=(c+1)/(m+1);
				if(tmp%2==1){
					if((c%m)%2==0){
						cout<<"First\n";
					} 
					else {
						cout<<"Second\n";
					}
				}
				else {
					if((c%m)%2==1){
						cout<<"First\n";
					}
					else {
						cout<<"Second\n";
					}
				}
			}
		}
	}
	return 0;
}
