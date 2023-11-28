#include <bits/stdc++.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*push,pop:hang doi first in first out
front:lay ra phan tu dau hang doi	*/
vector<string> res;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("1");
		
		for (int i=1;i<=n;i++){
			
				string top=q.front();
				res.push_back(top);
				
				q.push(top+"0");
				
				
				q.push(top+"1");
				q.pop();
				
			
					
		}
		for(string it:res){
			cout<<it<<" ";
		}
			
		
		cout<<endl;
	}
	return 0;
}
