
#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//ham find neu khong tim thay tra ve string::npos
int main(int argc, char** argv) {
	int n;
	cin>>n;
	vector<string> v;
	for (int i=0;i<n;i++){
		string x;
		cin>>x;
		v.push_back(x);
	}
	int cnt=0;
	sort(v.begin(),v.end());
	
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(v[j].find(v[i])!=string::npos){
				cnt++;
			}
			if(v[i].find(v[j])!=string::npos){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
