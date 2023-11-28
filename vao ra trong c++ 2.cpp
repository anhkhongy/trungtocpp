#include <fstream>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	string msv,ten,lop;
	double dtb,dc;
};
int main(int argc, char** argv) {
	int n;
	cin>>n;
	string s[n];
	ofstream fp1,fp2;
	fp1.open("A.txt");
	for (int i=0;i<n;i++){
		getline(cin,s[i]);
		fp1<<s[i]<<endl;
	}
	fp1.close();
	ifstream fp3;
	fp3.open("A.txt");
	fp2.open("B.txt");
	while(!fp3.eof()){
		string line;
		getline(fp3,line);
		fp2<<line<<endl;
	}
	fp2.close();
	fp3.close();
	//eof kiem tra xuong dong
	
	return 0;
}
