#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void process(int x,int y){
	if(y==1){
		if(x>=20){
			cout<<"Bao Binh";
		}
		else {
			cout<<"Ma Ket";
		}
	}
	else if(y==2){
		if(x>=19){
			cout<<"Song Ngu";
		}
		else cout<<"Bao Binh";
	}
	else if(y==3){
		if(x>=21){
			cout<<"Bach Duong";
		}
		else cout<<"Song Ngu";
	}
	else if(y==4){
		if(x>=20){
			cout<<"Kim Nguu";
		}
		else cout<<"Bach Duong";
	}
	else if(y==5){
		if(x>=21){
			cout<<"Song Tu";
		}
		else cout<<"Kim Nguu";
	}
	else if(y==6){
		if(x>=21){
			cout<<"Cu Giai";
		}
		else cout<<"Song Tu";
	}
	else if(y==7){
		if(x>=23){
			cout<<"Su Tu";
		}
		else cout<<"Cu Giai";
	}
	else if(y==8){
		if(x>=23){
			cout<<"Xu Nu";
		}
		else cout<<"Su Tu";
	}
	else if(y==9){
		if(x>=23){
			cout<<"Thien Binh";
		}
		else cout<<"Xu Nu";
	}
	else if(y==10){
		if(x>=23){
			cout<<"Thien Yet";
		}
		else cout<<"Thien Binh";
	}
	else if(y==11){
		if(x>=23){
			cout<<"Nhan Ma";
		}
		else cout<<"Thien Yet";
	}
	else if(y==12){
		if(x>=22){
			cout<<"Ma Ket";
		}
		else cout<<"Nhan Ma";
	}
	
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int d,m;
		cin>>d>>m;
		process(d,m);
		cout<<endl;
	}
	return 0;
}
