#include <iostream>
#include <algorithm>
#include <array>
#include <typeinfo>
#include <vector>
using namespace std;
int &print(array<int,10> &arr,int idx){
	return arr[idx];
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	array<int,10>arr;
	print(arr,2)=10;
	cout<<arr[2];
}
