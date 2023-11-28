#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ma = a[0],ind = 0;
		for (int i = 1; i < k; i++){
			if(a[i] > ma){
				ma = a[i];
				ind = i;
			}
		}
		cout << ma << " ";
		for (int j = k;j < n; j++){
			if (j-k >= ind){
				ma = a[ind+1];
				ind++;
				for (int t = ind + 1; t <= j; t++){
					if(a[t] > ma){
						ma = a[t];
						ind = t;
					}
				}
			}
			else {
				if(a[j] > ma){
					ma = a[j];
					ind = j;
				}
			}
			cout << ma << " ";
		}
		cout<<endl;
	}
	return 0;
}
