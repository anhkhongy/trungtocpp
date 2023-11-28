#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000001];
long long kq;
void merge(int a[], int l, int m, int r){
	vector<int> b(a + l, a + m + 1);
	vector<int> c(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while (i < b.size() && j < c.size()){
		if(b[i] <= c[j]){
			a[l] = b[i];
			++l; ++i;
		}
		else {
			kq += b.size() - i ;
			a[l] = c[j];
			++l; ++j;
		}
	}
	while (i < b.size()){
		a[l] = b[i]; 
		++l; ++i;
	}
	while (j < c.size()){
		a[l] = c[j];
		++l; ++j;
	}
}
void mergesort(int a[], int l, int r){
	if (l >= r)return;
	int m = (l + r) / 2;
	mergesort(a, l ,m);
	mergesort(a, m + 1, r);
	merge(a, l, m, r);
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		kq = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		mergesort(a, 0, n-1);
		cout << kq << endl;
	}
	return 0;
}
