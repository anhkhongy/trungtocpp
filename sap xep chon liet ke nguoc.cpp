#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<string> v;
	for (int i = 0; i < n-1; i++){
		string s = "";
		s += "Buoc " + to_string(i + 1)+":";
		int x = a[i];
		int min = i;
		for (int j = i+1; j < n; j++){
			if(a[j] < x){
				x = a[j];
				min = j;
				
			}
		}
		swap(a[min], a[i]);
		for (int k = 0;k < n; k++){
			s += " " + to_string(a[k]);
		}
		v.push_back(s);		
	}
	reverse(v.begin(), v.end());
	for (string x : v){
		cout << x << endl;
	}
	return 0;
}
