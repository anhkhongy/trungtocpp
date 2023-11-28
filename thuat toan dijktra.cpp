#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ii pair<int,int>
int V;
int a[1000][1000];
int d[1000] ;
int check[1000] = {0};
int truoc[1000] = {0};

void Dijkstra(int s){
	d[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, s});
	for (int i = 1; i <= V; i++){
		if(a[s][i] != 0){
			d[i] = a[s][i];
			truoc[i] = s;
		}	
		else {
			d[i] = INT_MAX;
		}
	}
	while(!q.empty()){
		ii p = q.top();
		q.pop();
		check[p.second] = 1;
		for (int i = 1; i <= V; i++){
			if(!check[i] && a[p.second][i] > 0){
				if(d[i] > p.first + a[p.second][i]){
					d[i] = p.first + a[p.second][i];
					truoc[i] = p.second;
					q.push({d[i], i});
				}
			}
		}
	}
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		check[i] = false;
		truoc[i] = 0;
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	int begin, end;
	cin >> begin >> end;
	Dijkstra(begin);
	string s = "";
	int ok = 1;
	int u = end;
	s = s + to_string(u);
	while (u != 5){
		/*if(!truoc[u]){
			ok = 0;
			break;
		}
		else {*/
			int t = truoc[u];
			s = s + " <- " + to_string(t);
			u = t;
		//}
	}
	if(ok == 0){
		cout << "Khong ton tai duong di";
	}
	else {
		cout << s << endl;
		cout << d[end];
	}
	return 0;
}
