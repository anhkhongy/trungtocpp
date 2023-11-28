#include<bits/stdc++.h> 
using namespace std; 
int checkSTN(string a) { int n=a.size(); for(int i=0;i<=n/2;i++) { if(a[i]==a[n-i-1]) continue; else return 0; } return 1; } int checkSC(string a) { for(int i=0;i<=a.size()/2;i++) { int x=a[i]-'0'; if(x%2==0) continue; else return 0; } return 1; } int main() { int t; cin>>t; cin.ignore(); while(t--) { string a; getline(cin, a); if(checkSTN(a)) { if(checkSC(a)) cout<<"YES\n"; else cout<<"NO\n"; } else cout<<"NO\n"; } }
