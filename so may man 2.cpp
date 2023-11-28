#include<bits/stdc++.h> 
using namespace std; 
int tcs(int n){ int sum=0; while(n>0){ sum+=n%10; n/=10; } if(sum>9) return tcs(sum); return sum; } bool somayman(string n){ int sum=0; for(int i=0; i<n.length(); i++){ sum+=n[i]-'0'; } if(tcs(sum)==9) return 1; return 0; } int main(){ int t; cin >> t; cin.ignore(); while(t--){ string n; getline(cin, n); if(somayman(n)) cout << 1 << endl; else cout << 0 << endl; } }
