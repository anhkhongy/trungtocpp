#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[100];
bool chuaxet[100];
int check;
int v, e;
void Hamilton(int u, int count){
	if(count == v){
		check = 1;
		return;
	}
	for (int i = 0; i < List[u].size(); i++){	
		int t = List[u][i];
		if(chuaxet[t]){
			chuaxet[t] = false;
			Hamilton(t, count + 1);
			chuaxet[t] = true;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		
		cin >> v >> e;
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 100; i++){
			List[i].clear();
		}
		check = 0;
		int d, c;
		while (e--){
			cin >> d >> c;
			List[d].push_back(c);
			List[c].push_back(d);
		}
		for (int i = 1; i <= v; i++){
			memset(chuaxet, true, sizeof(chuaxet));
			Hamilton(i, 1);
			if(check == 1){
				cout << 1 << endl;
				break;
			}
		}
		if(!check){
			cout << 0 << endl;
		}
	}
	return 0;
}
