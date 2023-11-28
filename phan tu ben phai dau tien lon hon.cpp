#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void xuly(int a[], int n){
	stack<int> st;
	int R[n];
	for (int i = n - 1; i >= 0; i--){
		while ( !st.empty() && st.top() <= a[i]){
			st.pop(); 
		}
		if(st.empty()){
			R[i] = -1;
		}
		else {
			R[i] = st.top();		
		}
		st.push(a[i]);
	}
	for (int i = 0; i < n; i++){
		cout << R[i] << " ";	
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		xuly(a, n);
		cout << endl;
	} 
	return 0;
}
