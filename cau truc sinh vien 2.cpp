#include <bits/stdc++.h>
using namespace std;
struct NhanVien{ string ten , gt , ns , dc , thue , hd ; int ma; }; void nhap(NhanVien &nv){ cin.ignore(); getline(cin,nv.ten); cin>>nv.gt; cin>>nv.ns; cin.ignore(); getline(cin,nv.dc); cin>>nv.thue ; cin>>nv.hd; } void inds(NhanVien nv[], int N){ for(int i = 0 ; i<N ; i++){ string res = to_string(i+1); while(res.size()<5){ res = "0"+res; } cout<<res<<" "; cout<<nv[i].ten<<" "<<nv[i].gt<<" "<<nv[i].ns<<" "<<nv[i].dc<<" "<<nv[i].thue<<" "<<nv[i].hd<<endl; } }
