#include <bits/stdc++.h> 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main() { string s=""; string s1; getline(cin,s1); for (long long i=s1.size()-1;i>=0;i--) if ((s1[i]>=65) && (s1[i]<=90 )) s1[i] +=32; long long k=0; int kt=0; for (long long i=s1.size()-1;i>=0;i--) { if((s1[i] !=' ') && (s1[i-1] ==' ')) { k=i; break; } else if(i==0) kt=1;k=i; } for (long long i=k;i<s1.size();i++) s+=s1[i]; if(kt==0) s+=s1[0]; for (long long i=0;i<k-1;i++) { if ((s1[i]==' ')&&(s1[i+1]!=' ')) s+=s1[i+1]; } s+="@ptit.edu.vn"; cout<<s<<endl; return 0; }
