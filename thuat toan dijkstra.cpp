#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int s, t;
int a[50][50];
int truoc[50];
int d[50];
int final[50];
void init(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j] == 0) a[i][j] = 10000000;
		}
	}
}
void Dijkstra(){
	int u, v, mi;
	for (int i = 1; i <= n; i++){
		d[i] = a[s][i];
		truoc[i] = s;
		final[i] = 0;
	}
	truoc[s] = 0;
	d[s] = 0;
	final[s] = 1;
	while (!final[t]){
		mi = INT_MAX;
		for (int i = 1; i <= n; i++){
			if(!final[i] && mi > d[i]){
				u = i;
				mi = d[i];
			}
		}
		final[u] = 1;
		if(!final[t]){
			for (int i = 1; i <= n; i++){
				if(!final[i] && d[i] > d[u] + a[u][i]){
					d[i] = d[u] + a[u][i];
					truoc[i] = u;
				}
			}
		}
	}
}
int main(int argc, char** argv) {
	init();
	cin >> s >> t;
	Dijkstra();
	int k;
	cout << t;
	k = truoc[t];
	while (k != s){
		cout << " <- " << k;
		k = truoc[k];
	}
	cout << " <- " << s << endl;
	cout << d[t];
	return 0;
} 
