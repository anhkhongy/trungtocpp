#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t; cin>>t; cin.ignore(1); while(t--) { string a; getline(cin, a); int dem=0; for(int i=0;i<a.length();i++) { if(a[i]=='\t' || a[i]=='\n' || a[i]==' ') { while(a[i]=='\t' || a[i]=='\n' || a[i]==' '){ i++; } i--; } else { while(a[i]!='\t' && a[i]!='\n' && a[i]!=' ' && a[i]!='\0'){ i++; } ++dem; i--; } } cout<<dem<<endl;; } }

