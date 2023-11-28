#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int calc(string &s)
{
    if(s.length() > 9) return 0;
    ll n = 0;
    for(char i : s)
    {
        if(!isdigit(i)) return 0;
        n = n * 10 + i - '0';
    }
    if(n <= 2147483647) return (int) n;
    return 0;
}

int main()
{
    
    ifstream fin("DATA.in");
    string s;
    ll sum = 0;
    while(fin >> s) sum += calc(s);
    cout << sum;
    return 0;
}

