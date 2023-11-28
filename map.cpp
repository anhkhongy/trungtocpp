#include <iostream>
#include <map>
using namespace std;
/* run this program  the console pauser or add your own getch, system("pause") or input loop */
/*trong map key khong duoc trung nhau*/ 
int main(int argc, char** argv) {
	map<int,int> mp;
	mp[100]=200;
	mp.insert({300,400});
	mp.insert({400,500});
	/*cout<<mp.size();
*/	/*for(pair<int,int> x:mp){
		cout<<x.first<<' '<<x.second<<endl;
	}*/
	for (auto it:mp){
		cout<<it.first<<' '<<it.second<<endl;
	}
	for (map<int,int> ::iterator it =mp.begin();it!=mp.end();it++){
		cout<<(*it).first<<' '<<(*it).second<<endl;
	}/*dung trong c++ duoi c++11*/ 
	if (mp.count(100)!=0){
		cout<<"found";
	}
	return 0;
}
