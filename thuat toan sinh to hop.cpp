#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k;
int x[100];
vector<string> v;
void init(){
	for (int i=1;i<=k;i++){
		x[i]=i;
	}
}
bool checkFinal(){
	for (int i=1;i<=k;i++){
		if(x[i]<n-k+i)return false;
	}
	return true;
}
void genNext(){
	int i=k;
	while(i>0&&x[i]==n-k+i){
		--i;
	}
	x[i]++;
	for (int j=i+1;j<=k;j++){
		x[j]=x[j-1]+1;
	}
}
void display(){
	for (int i=1;i<=k;i++){
		cout<<v[x[i]-1]<<" ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	cin>>n>>k;
	string s;
	init();
	for (int i=1;i<=n;i++){
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end());
	
	while(!checkFinal()){
		display();
		genNext();
	}
	display();
	cout<<endl;
	return 0;
}
