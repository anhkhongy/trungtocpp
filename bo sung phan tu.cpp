#include<bits/stdc++.h> 
using namespace std; 
int main() { int t; cin>>t; while(t--) { int n; cin>>n; set<long> a; for(int i=0;i<n;i++) { int x; cin>>x; a.insert(x); } long tmp=*a.begin(); int dem=0; while(tmp<=*a.rbegin()) { tmp++; dem++; } cout<<dem-a.size(); cout<<endl; } }
