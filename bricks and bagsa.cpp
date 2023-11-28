#include "bits/stdc++.h"
using namespace std;
 
int main(){
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  int v[n]; for(int& i : v) cin >> i; sort(v, v+n);
  int ans = 0;
  for(int i = 1; i < n-1; ++i) ans = max({ans, v[n-1] + v[i] - 2*v[i-1], 2*v[i+1] - v[i] - v[0]});
  cout << ans << endl;
 }
}
