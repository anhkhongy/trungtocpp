#include<bits/stdc++.h>
using namespace std;
int main()
{
 
int t;
cin>>t;
while(t>0)
{
int n,i;
cin>>n;
deque<int> a;
 
for(i=0;i<n;i++){
int x;
cin>>x;
if(i==0) {a.push_back(x);}
if(i!=0){
if(x<a[0]) a.push_front(x);
else a.push_back(x);
}}
 
 
for(i=0;i<n;i++) {cout<<a[i]<<" ";}
cout<<endl;
t--;
}}
