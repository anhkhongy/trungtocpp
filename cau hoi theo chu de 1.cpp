#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, kq = "";
    int cnt = 0;
    string a;
    getline( cin, a);
    for ( int i = 1; i <= n; i++)
    {
        getline(cin, s);
        if ( kq == "")
            kq = s;
        if ( s == "")
        {
            cout << kq <<": "<<cnt - 1<< endl;
            cnt = 0;
            kq = "";
        }
        else
            cnt++;
    }
    cout << kq <<": "<<cnt - 1;
    return 0;
}

