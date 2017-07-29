//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

bool d[367];
int m[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

auto main() -> signed {
int n;cin>>n;
    for(int i=1;i<=366;i++)if(i%7<2)d[i]=1;
    for(int i=0;i<n;i++)
    {
        int a,b;scanf("%d/%d",&a,&b);
        int sum=0;
        for(int j=0;j<a;j++)sum+=m[j];
        int day=sum+b;
        for(;day<=366&&d[day];day++);
        d[day]=1;
    }
    int M=0,cnt=0;
    for(int i=1;i<=366;i++)
    {
        if(d[i])cnt++;
        else
        {
            M=M<cnt?cnt:M;
            cnt=0;
        }
    }
    M=M<cnt?cnt:M;
    cout<<M<<endl;
    return 0;
}

