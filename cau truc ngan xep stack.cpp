#include <bits/stdc++.h>
#include <stack>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*cac thao tac tren stack:
push: day mot phan tu vao ngan xep;
pop:xoa mot phan tu ra khoi ngan xep:
top :lay ra phan tu o dinh ngan xep
size: so luong phan tu trong ngan xep
empty:ktra xem ngan xep co rong hay ko*/
int main(int argc, char** argv) {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop();
	cout<<st.top()<<endl;
	cout<<st.size()<<endl;
	return 0;
}
