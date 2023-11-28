#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sum(){
	int n;
	cin>>n;
	vector<int> v(10, 0);
	for(int i = 0; i < n; i++){
		int tmp;
		cin>>tmp;
		v[tmp%10]++;
	}
	for(int i = 0; i < 10; i++) if(v[i]){
		v[i]--;
		for(int j = 0; j < 10; j++) if(v[j]) {
			v[j]--;
			if(v[(23 - i - j) % 10]){
				cout<<"YES\n";
				return;
			}
			v[j]++;
		}
		v[i]++;
	}
	cout<<"NO\n";
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		sum();
	}
}

