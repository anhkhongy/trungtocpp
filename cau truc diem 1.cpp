#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Point{
	double x,y;
};
void input(Point &a){
	cin>>a.x>>a.y;
}
double distance (Point a,Point b){
	double res=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return res;
}
int main(int argc, char** argv) {
	struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
	return 0;
}
