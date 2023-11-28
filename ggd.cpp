#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;
	}
	int max=a[0];
	for (int i=1;i<26;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	int tmp=s.length()-max;
	if((max-tmp)>1)cout<<"0\n";
	else cout<<"1\n";
	return 0;
}
