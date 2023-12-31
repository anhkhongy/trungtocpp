#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
vector<int> x[100];
int n, m;
bool ok;
vector<bool> a;
void dfs(int s, int k)
{
    for (int v : x[s])
    {
        if (a[v] == 0)
            continue;
        if (k == n)
        {
            ok = 1;
            return;
        }
        a[v] = 0;
        dfs(v, k + 1);
        a[v] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < 100; i++)
            x[i].clear();
        ok = 0;
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            x[u].push_back(v);
            x[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
        {
            a.clear();
            a.resize(100, 1);
            dfs(i, 1);
            if (ok)
            {
                cout << 1 << endl;
                break;
            }
        }
        if (!ok)
            cout << 0 << endl;
    }
}

