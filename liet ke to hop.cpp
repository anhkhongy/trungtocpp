#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c[1001]={0};
int a[1001], b[1001];
int n,k;
void Try(int i,int n){
	for (int j = c[i-1] + 1; j <= n; j++){
		c[i] = j;
		if (i == k){
			for (int f = 1; f <= k; f++){
				cout << b[c[f]-1] <<" ";
			}
			cout << endl;
		}
		else {
			Try(i+1,n);
		}
	}
}
int main(int argc, char** argv) {
	cin >> n >> k;
	set<int> se;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	int dem = 0;
	for (int x:se){
		b[dem++] = x;
	}
	Try(1,se.size());
	return 0;
}
