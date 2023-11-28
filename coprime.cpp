#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int t, n, a, q; cin >> t; while (t--) {
  cin >> n;
  map<int, int> m;
  q = n; while(q--) {cin >> a; m[a] = n - q;}
  a = -1;
  for (auto [x, p]: m) for (auto [y, q]: m) if (__gcd(x, y) == 1) a = max(a, p + q);
  cout << a << '\n';
 }
}
