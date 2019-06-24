#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int N;
int A[100005],B[100005];
 
int main(){
 
cin>>N;
 
for(int i=0; i<N; i++) scanf("%d",&A[i]);
 
int s=-1,e=-1,ans=1; 
 
for(int i=0; i<N; i++) B[A[i]]=-1;
 
for(int i=0; i<N; i++){
    if(B[A[i]]>=s) s=B[A[i]]+1; 
    B[A[i]]=i; e++;
    ans=max(ans,e-s+1);
}
 
cout<<ans<<endl;
 
}
 
