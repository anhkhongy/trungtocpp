#include <bits/stdc++.h>
using namespace std;
/*thuat taon sinh ke tiep
khoi tao cau hinh dau tien
while(khi chua phai cau hinh cuoi cung)
in ra cau hinh hien tai
sinh ra cau hinh tiep theo
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,a[100],ok;
void kt(){
	for (int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for (int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>k;
	 	ok=1;
	 	kt();
		while(ok){
			for (int i=1;i<=k;i++){
				cout<<a[i];
			}
		cout<<endl; 
		sinh();
	}
	return 0;
}
