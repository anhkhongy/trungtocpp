#include<bits/stdc++.h> 
using namespace std; 
int snt(long long n){ if(n<2) return false; for(long i=2;i<=sqrt(n);i++){ if(n%i==0)return false; } return true; } int main(){ int t; cin>>t; while(t--){ int n=2; int c=0; int a[10000]; for(int i=0;i<n;i++){ cin>>a[i]; } for(int j=a[0];j<=a[1];j++){ if(snt(j)) c++; }cout<<c<<endl; }return 0; }
