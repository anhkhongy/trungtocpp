#include <bits/stdc++.h>
#include <stack>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack <int> st;
	int n;
	cin>>n;
	int a[n];
	for (int &x:a)cin>>x;
	int i=0;
	int res=0;
	while(i<n){
		if(st.empty()||a[i]>=a[st.top()]){
			st.push(i);
			i++;
		}
		else {
			int idx=st.top();
			st.pop();
			if(st.empty()){
				res=max(res,a[idx]*i);	
			}
			else {
				res=max(res,a[idx]*(i-st.top()-1));
			}
		}
	}
	while(!st.empty()){
			int idx=st.top();
			st.pop();
			if(st.empty()){
				res=max(res,a[idx]*i);	
			}
			else {
				res=max(res,a[idx]*(i-st.top()-1));
			}
	} 
	cout<<res<<endl;
	return 0;
}
