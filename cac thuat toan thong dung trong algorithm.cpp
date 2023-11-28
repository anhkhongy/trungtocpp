#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*min:tim min trong 2 hoac nhieu so
max:tim so lon nhat trong nhieu so
min_element(dia chi dau, dia chi cuoi) or max_element :tim so lon nhat nho nhat trong mang hoac vecto;
accumulate(dia chi dau, dia chi cuoi,gia tri khoi tao) tinh tong cac phan tu trong mang hoac vecto
swap :hoan doi vi tri hai gia tri
find(dia chi dau,dia chi cuoi,gia tri can tim): tim kiem mang hoac phan tu nao do trong vecto hoac mang
binary_search:tim vi tri trong mang hoac vector da duoc sap xep
lower_bound:tra ve con tro iterator dau tien lon hon hoac bang key(dung cho ca map va set><upper_bound
fill:gan cac phan tu trong mang hoac vecto mot gia tri nao do
merge:tron hai day da sap xep voi nhau
reverse: lat nguoc mang hoac vector ca so va string
set_union: hop hai mang hoac 2 vecto da duoc sap xep
set_intersection:giao cua hai mang hoac 2 vecto
set_difference:phan tu thuoc mang nay nhung khong thuoc mang kia
set_symmetric_diffence:nhung phan tu thuoc ca hai mang khong thuoc phan giao cua hai mang
*/
int main(int argc, char** argv) {
	/*int p=min({10,20,30});
	cout<<p;*/
	/*int a[5]={1,2,3,4,5};
	cout<<*max_element(a,a+5);*/
	/*int a[5]={1,2,3,4,5};
	auto it=find(a,a+5,3);
	cout<<*it;*/
	/*vector<int> a={1,2,3,4,5};
	cout<<binary_search(a.begin(),a.end(),2);*/
	/*vector<int>a(10);
	fill(a.begin(),a.end(),100);
	for (int x:a){
		cout<<x<<' ';
	}*/
	/*vector<int> a={1,2,3,4,5};
	vector<int> b={6,7,8,9,10};
	vector <int> res(10);
	merge(a.begin(),a.end(),b.begin(),b.end(),res.begin());
	for (int x:res){
		cout<<x<<' ';
	}*/
	/*int a[5]={1,2,3,4,5};
	reverse(a,a+3);
	for(int x:a){
		cout<<x<<' ';
	}*/
	/*int a[5]={1,2,3,4,5};
	int b[6]={1,3,4,5,6,7};
	vector<int> u(11);
	auto it=set_union(a,a+5,b,b+6,u.begin());
	u.resize(it-u.begin());
	for (int x:u){
		cout<<x<<' ';
	}*/
	int a[5]={1,3,5,7,8};
	int b[6]={0,2,4,7,8,9};
	vector <int> u(11);
	auto it=set_symmetric_difference(a,a+5,b,b+6,u.begin());
	u.resize(it-u.begin());
	for (int x:u){
		cout<<x<<' ';
	}
	return 0;
}
