#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[100],ok;
bool check()
{
    for (int i = 2; i <= n - 1; i++)
        if ((a[i] == 1 || a[i] == 5) && 
        (a[i - 1] != 1 && a[i - 1] != 5) && 
        (a[i + 1] != 1 && a[i + 1] != 5))
            return 0;
    return 1;
}
void init(){
	for (int i=1;i<=n;i++){
		a[i]=i;
	}
}
void next(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
		sort(a+i+1,a+n+1);
		for (int j=i+1;j<=n;j++){
			if(a[j]>a[i]){
				swap(a[j],a[i]);
				break;
			}
			
		}
		
	}
}
int main(){
	char c;
	cin>>c;
	n=c-'A'+1;
	init();
	ok=1;
	while(ok){
		if(check()){
			for (int i=1;i<=n;i++){
				cout<<char(a[i]+'A'-1);
			}
			cout<<endl;
		}
		next();
	}

}
