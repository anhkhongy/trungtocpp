#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string string_sum(string s1, string s2){
	string ans = "";
	while (s1.size() < s2.size()){
		s1 = "0" + s1;
	}
	while(s1.size() > s2.size()){
		s2 = "0" + s2;
	}
	int nho = 0;
	for (int i = s1.size() - 1; i >= 0; i--){
		int tmp = s1[i] - '0' + s2[i] - '0' + nho;
		nho = 0;
		if(tmp >= 10){
			nho ++;
			tmp /= 10;
		}
		ans = to_string(tmp) + ans;
	}
	if(nho > 0){
		ans = to_string(nho) + ans;
	}
	return ans;
}
bool subArray(string res, int ind, int len1, int len2){
	string s1 = res.substr(ind, len1);
	string s2 = res.substr(ind + len1, len2);
	string s3 = string_sum(s1, s2);
	if(s3.size() > res.size() - len1 - len2 - ind){
		return false;
	}
	if(s3 == res.substr(ind + len1 + len2, s3.size())){
		if(s3.size() == res.size() - ind - len1 - len2){
			return true;
		}
		return (res, ind + len1, len2, s3.size());
	}
	return false;
}
int main(int argc, char** argv) {
	string s;
	cin >> s;
	int n = s.length();
	int ok = 0;
	for (int i = 1; i < n; i++){
		for (int j = 1; j + i < n; j++){
			if(subArray(s, 0, i, j)){
				ok = 1;
			}
		}
	}
	if(ok){
		cout << "YES" ;
	}
	else {
		cout << "NO";
	}
}
