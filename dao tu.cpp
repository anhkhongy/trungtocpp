#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, x = "";
        stack<string> st;
        getline(cin, s);
        s += ' ';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (x != "")
                {
                    st.push(x);
                    x = "";
                }
            }
            else
                x += s[i];
        }
        while (st.size())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
