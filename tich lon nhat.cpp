#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ok = 0;
    cin >> n;
    long long x;
    vector<long long> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x)
            a.push_back(x);
        else
            ok = 1;
    }
    n = a.size();
    sort(a.begin(), a.end());
    long long ans = max(a[0] * a[1], max(a[0] * a[1] * a[n - 1], max(a[n - 1] * a[n - 2], a[n - 1] * a[n - 2] * a[n - 3])));
    if (ans > 0)
        cout << ans;
    else
        cout << 0;
}
