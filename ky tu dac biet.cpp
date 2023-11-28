#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<long long> a;
void tinh(string s){
	long long n = s.length();
	while (n <= 1e18 ){
		a.push_back(n + 1);
		n *= 2;
	}
}
char  val(long long k, string s, long long pos){
	int n = s.length();
	if (k <= n){
		return s[k - 1];
	}
	if (k < a[pos]){
		return val(k, s, pos - 1);
	}
	else if(k == a[pos]){
		return s[n - pos % n - 1];
	}
	else if(k > a[pos]){
		return val(k - a[pos], s, pos - 1);
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		a.clear();
		string s;
		cin >> s;
		long long n;
		cin >> n;
		tinh(s);
		cout << val(n, s, a.size() - 1) << endl;
	}
	return 0;
}
