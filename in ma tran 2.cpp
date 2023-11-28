#include<bits/stdc++.h> 

#include<cmath> 
using namespace std;
int main(){ int t; cin>>t; while(t--){ int n; cin>>n; n*=4; int a[n][n]; int k=1; for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ a[i][j]=k; k++; } } int row=n/2,colum=n/2-1; int b[n*n/2]; b[0]=a[row][colum]; int index=1,i=1; while(index<=n/2){ int count=0; while(colum<n/2 && count<2*index){ row--; b[i]=a[row][colum]; i++; count++; } count=0; while( row<n/2 && count<2*index) { colum++; b[i]=a[row][colum]; i++; count++; } count=0; index++; while(colum>n/2 && count<2*index){ if(index!=n/2){ row++; b[i]=a[row][colum]; count++; i++; } else{ row++; b[i]=a[row][colum]; i++; if(i==n*n/2) break; } } count=0; while(row>n/2 && count<2*index){ colum--; b[i]=a[row][colum]; i++; count++; } index++; } for(int i=0;i<n*n/2;i++){ cout<<b[i]<<" "; } cout<<endl; for(int i=0;i<n*n/2;i++) cout<<n*n+1-b[i]<<" "; cout<<endl; } return 0; }
