#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	queue<string> q;
	q.push("1");
	q.push("2");
	cout<<q.front();
	cout<<q.empty();
	q.pop();
	cout<<q.front();
	return 0;
}
