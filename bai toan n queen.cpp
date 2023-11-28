#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//bai toan n queen :phan tu (i,j)kiem soat cot j,duong cheo xuoi i-j+n,duong cheo nguoc i+j-1
int n;
void inkq(){
	
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if(cot[j]==1&&d1[i-j+n]==1&&d2[i+j-1]==1){
			x[i]=j;
			cot[j]=d1[i-j+n]=d2[i+j-1]=0;
			if(i==n){
				inkq();
			}
			else {
				Try(i+1);
			} 
			cot[j]=d1[i-j+n]=d2[i+j-1]=1;
		}
		
	}
}
int main(int argc, char** argv) {
	return 0;
}
