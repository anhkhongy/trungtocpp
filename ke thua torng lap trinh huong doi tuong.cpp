#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*base class:class cha
derived class:class con*/
class Person{
	private:
		string name;
		string address;
	public:
		string getName(){
			return name;
		}
		string getAddress(){
			return address;
		}
		void setName(string name){
			this->name=name;
		}
		void setAddress(string address){
			this->address=address;
		}
};
class SinhVien : private Person{//neu public-> private thi tat ca cac member cua lop cha thanh private cua lop con nen khong truy van duoc,con nhung member cua lop con ma khong thuoc lop cha thi van binh thuong  
	private:
		float gpa;
	public:
		student(string name,string address,float gpa):Person(name,address){
			this->gpa=gpa;//goi ham tao tu lop cha
		}
		float getGpa(){
			return gpa;
		}
		void setGpa(float gpa){
			this->gpa=gpa;
		}
};
int main(int argc, char** argv) {
	SinhVien x;
	x.setGpa(3.5);
	cout<<x.getGpa();
	return 0;
}
