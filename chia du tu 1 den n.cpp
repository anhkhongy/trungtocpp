#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){ int t; cin>>t; while(t--){ long long n,k; cin>>n>>k; long long sum=0; for(int i=1;i<=n;i++){ if(i%k==0) continue; else sum+=i%k; } cout<<sum<<endl; } }
