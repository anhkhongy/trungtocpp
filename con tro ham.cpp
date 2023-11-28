#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool to(int a,int b){
	return a>b;
}
bool be(int a,int b){
	return a<b;
}
void sel(int *arr,int n,bool(*com)(int,int)){
	for(int i=0;i<n-1;i++){
		int idx=i;
		for (int j=i+1;j<n;j++){
			if (com(arr[idx],arr[j]))
				idx=j;
		}
		int temp=arr[idx];
		arr[idx]=arr[i];
		arr[i]=temp;
	}
	
}
int main(int argc, char** argv) {
	int arr[5]={2,6,5,4,7};
	sel(arr,5,be);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
