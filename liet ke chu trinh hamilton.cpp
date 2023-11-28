#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000][1000];
int x[1000];
int n, v;
bool chuaxet[1000];
void Hamilton(int k){
			if(k == n + 1 && a[x[k - 1]][v] == 1){
				for (int j = 1; j <= n ; j++){
					cout << x[j] << " ";
				}
				cout << v;
				cout << endl;
			}
			else {
				for (int i = 1; i <= n; i++){
					if(chuaxet[i] == true && a[x[k - 1]][i] == 1){
						x[k] = i;
						chuaxet[i] = false;
						Hamilton(k + 1);
						chuaxet[i] = true;
					}
				}
			}
		}
//	}

int main(int argc, char** argv) {
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		chuaxet[i] = true;
	}
	cin >> v;
	x[1] = v;
	chuaxet[v] = false;
	Hamilton(2);
	return 0;
}
