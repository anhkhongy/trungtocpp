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
        int n;
        cin >> n;
        int a[n], b[n], ok = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] != b[n - i - 1])
            {
                ok = 0;
                break;
            }
        }
        if (ok == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
