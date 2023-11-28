#include<bits/stdc++.h>
using namespace std;
int n, m, start, D[1005];
vector<pair<int, int>> List[1005];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<int>> q;
void dijkstra(int start){
    int i, u ,v;
    for (int i = 1; i <= n; i++){
        D[i] = 1e9;
    }
    D[start] = 0;
    while (!q.empty())q.pop();
    q.push({0, start});
    while (!q.empty()){
        u = q.top().second; q.pop();
        for (int i = 0; i < List[u].size(); i++){
            v = List[u][i].second;
            int du = List[u][i].first;
            if(D[u] + du < D[v]){
                D[v] = D[u] + du;
                q.push({D[v], v});
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m >> start;
        for (int i = 0; i < 1005; i++){
            List[i].clear();
        }
        while (m--){
            int u, v, w;
            cin >> u >> v >> w;
            List[u].push_back({w, v});
            List[v].push_back({w, u});
        }
        dijkstra(start);
        for (int i = 1; i <= n; i++){
            cout << D[i] <<  " ";
        }
        cout << endl;
    }
}
