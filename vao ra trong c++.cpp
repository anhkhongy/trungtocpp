#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream fp1;
	ofstream fp2;
	fp1.open("PTIT.in");
	fp2.open("PTIT.out");
	while(!fp1.eof()){
		string line;
		getline(fp1,line);
		
		
		fp2<<line;
	}
	fp1.close();
	fp2.close();
	return 0;
}
