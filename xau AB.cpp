#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ok;
string s;
int n;
void kt(){
	for (int i=0;i<n;i++){
		s+='A';
	}
}
void next(){
	int i=n-1;
	while(i>=0&&s[i]=='B'){
		--i;
	}
	if(i==-1){
		ok=0;
	}
	else {
		s[i]='B';
		for (int j=i+1;j<n;j++){
			s[j]='A';
		}
	}
}
void display(){
	cout<<s<<" ";
}
int main(int argc, char** argv) {

	int t;
	cin>>t;
	while(t--){
		s="";
		ok=1;
		cin>>n;
		kt();
		while(ok==1){
			display();
			next();
		}
		cout<<endl;
	}
	return 0;
}
