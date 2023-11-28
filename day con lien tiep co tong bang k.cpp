#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, x, ok = 0;
        long long k;
        cin >> n >> k;
        long long a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; i++)
        {
            l = i;
            r = n;
            while (l <= r)
            {
                x = (l + r) / 2;
                if (a[x] - a[i - 1] == k)
                {
                    ok = 1;
                    break;
                }
                else if (a[x] - a[i - 1] > k)
                {
                    r = x - 1;
                }
                else
                    l = x + 1;
            }
            if (ok)
                break;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
