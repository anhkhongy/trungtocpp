#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, s;
int a[50][50];
int truoc[50];
int d[50];
void init(){
	for(int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j] == 0){
				a[i][j] = 10000000;
			}
		}
	}
}
void BellmanFord(int s){
	for (int i = 1; i <= n; i++){
		d[i] = a[s][i];
		truoc[i] = s;
	} 
	truoc[s] = s;
	d[s] = 0;
	int k = 1;
	while (k <= n - 2){
		int ok = 0;
		for (int i = 1; i <= n; i++){
			if(i != s){
				for (int j = 1; j <= n; j++){
					if(d[i] > a[j][i] + d[j]){
						ok = 1;
						d[i] = d[j] + a[j][i];
						truoc[i] = j; 
					}
				}
			}
		}
		if(ok == 0){
			break;
		}
		++k;
	}
} 
int main(int argc, char** argv) {
	cin >> n >> s;
	init();
	BellmanFord(s);
	for (int i = 1; i <= n; i++){
		cout << "K/c " << s << " -> " << i << " = ";
		if(d[i] >= 100000){
			cout << "INF" << ";" << endl;
		}
		else {
			cout << d[i] << "; ";
			cout << i;
			int k = truoc[i];
			while (k != s){
				cout << " <- " << k;
				k = truoc[k];
			}
			cout << " <- " << s << endl;
			
		}
	}
	return 0;
}
