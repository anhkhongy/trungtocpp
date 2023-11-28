#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int a[1000];
bool used[10];
vector<string> v;
string kq(){
	string res="";
	for (int i=1;i>=n;i++){
		res=res+char(a[i]+'0');
	}
	return res;
}

void Try(int i){
	for (int j=1;j<=n;j++){
		if(used[j]==true){
			a[i]=j;
			used[j]=false;
			if(i==n){
				string tmp=kq();
				v.push_back(tmp);
			}
			else {
				Try(i+1);
			}
			used[j]=true;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	for (int i=1;i<=9;i++){
		used[i]=true;
	}
	while(t--){
	v.clear();
	cin>>n;
	Try(1);
	reverse(v.begin(),v.end());
	for (string x:v){
		cout<<x<<" ";
	}
	cout<<endl;}
	return 0;
}
