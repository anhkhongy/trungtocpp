#include<fstream>
#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	fstream in, out;
    in.open("PTIT.in", ios::in);
    out.open("PTIT.out", ios::out);
    string s;
    while(getline(in, s)) out << s << endl;
    return 0;
    in.close();
    out.close();
	return 0;
}
