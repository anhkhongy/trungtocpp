#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t ; cin>>t ; while(t--){ int n , k ; cin>>n>>k ; int arr[n+1]; for(int i =0 ; i<n ; i++){ cin>>arr[i]; } sort(arr , arr+n); cout<<arr[k-1]<<endl; }
	return 0;
}
