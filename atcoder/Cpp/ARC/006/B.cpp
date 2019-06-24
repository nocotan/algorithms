#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int N,L;
 
int main(){
 
cin>>N>>L;
 
string s[30];
 
getline(cin, s[0]);
for (int i = 0; i < L; i++) getline(cin, s[i]);
 
string ss;
getline(cin, ss);
 
int k;
for(int i=0; i<2*N-1; i++) if(ss[i]=='o') k=i;
 
for (int i = L-1; i>=0; i--){
    if(k-1>=0&&s[i][k-1]=='-') k=k-2;
    else if(k+1<=2*N-2&&s[i][k+1]=='-') k=k+2;
}
 
cout<<k/2+1<<endl;
 
}
