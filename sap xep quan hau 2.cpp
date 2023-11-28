#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c[20], d1[20], d2[20];
int a[20];
int A[20][20];
int ma = INT_MIN;
void update(){
	int tong = 0;
	for (int i = 1; i <= 8; i++){
		tong += A[i][a[i]];
	}
	ma = max(tong,ma);
}
void Try(int i){
	if (i == 9){
		update();
		return;
	}
	for (int j = 1; j <= 8; j++){
		if (c[j] == 1 && d1[i+j-1] == 1 && d2[i-j+8] == 1){
			a[i] = j;
			c[j] = 0;
			d1[i+j-1] = 0;
			d2[i-j+8] = 0;
			Try(i+1);
			c[j] = 1; d1[i+j-1] = 1; d2[i-j+8] = 1;
		} 
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		ma = INT_MIN;
		for (int i = 1; i <= 50; i++){
			c[i] = d1[i] = d2[i] = 1;
		}
		for (int i = 1; i <=8; i++){
			for (int j = 1; j <= 8; j++){
				cin >> A[i][j];
			}
		}
		Try(1);
		cout << ma << endl;
	}
	return 0;
}
