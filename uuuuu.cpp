#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; bool difference (string s, string str) { int c = 0; for (int i = 0; i < s.size(); i++) { if (s[i] != str[i]) c++; } return c == 2; } int main() { int t; cin >> t; while (t--) { string s; cin >> s; string str = s; if (is_sorted(s.begin(), s.end())) cout << -1 << endl; else{ while (!difference(s, str)) { prev_permutation (s.begin(), s.end()); } cout << s << endl; } } }
