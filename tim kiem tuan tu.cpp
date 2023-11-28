#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main() { int t; cin>>t; while(t--) { int n,k; cin>>n>>k; int X[n+1]; for(int i=1;i<=n;i++) { cin>>X[i]; } int dem=-1; for(int i=n;i>=1;i--) { if(X[i]==k) { dem=i; } } cout<<dem<<endl; } }
