#include <iostream>
#include <queue>
#define MAXN 200000
using namespace std;
int main(){
	int T, N, x;
	int pos[MAXN+1][2], ans[MAXN+1][2];
	for(cin >> T; T; T--){
		cin >> N;
		bool bad = false;
		for(int i=0; i<=N; i++)
			pos[i][0] = pos[i][1] = -1;
		for(int i=0; i<N; i++){
			cin >> x;
			if(pos[x][0] == -1)
				pos[x][0] = i;
			else if(pos[x][1] == -1)
				pos[x][1] = i;
			else
				bad = true;
		}
		queue<int> q[2];
		for(int i=N; i>0; i--){
			for(int j=0; j<2; j++){
				if(pos[i][j] == -1){
					if(q[j].empty())
						bad = true;
					else{
						ans[q[j].front()][j] = i;
						q[j].pop();
					}
				} else {
					ans[pos[i][j]][j] = i;
					q[j^1].push(pos[i][j]);
				}
			}
		}
		if(bad)
			cout << "NO\n";
		else{
			cout << "YES\n";
			for(int j=0; j<2; j++){
				for(int i=0; i<N; i++)
					cout << ans[i][j] << " ";
				cout << endl;
			}
		}
	}
}
