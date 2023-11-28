#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t=a[i]+a[i-1];
	a[i-1]+=1;
	int du=t%a[i-1];
	t=t-du;
	int l=i;
		if(t>=(3*a[i-1])){
			
			while(t>=0){
				a[l]=a[i-1];
				t=t-a[i-1];
				++l;
			}
			a[l-1]=a[l-1]+du;}
	return 0;
}
