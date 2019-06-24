#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
typedef pair<int,int> P;
#define inf 10000000000
int h,w,t;
long long int sx,sy,gx,gy;
long long int d[11][11];
char s[11][11];
int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
int bfs(int x){
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            d[i][j]=inf;
        }
    }
    queue<P>q;
    q.push(P(sy,sx));
    d[sy][sx]=0;
    while(!q.empty()){
        P p=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int ny=p.first+dy[i];
            int nx=p.second+dx[i];
            int cost;
            if(s[ny][nx]=='#'){
                cost=x;
            }else cost=1;
            if(d[ny][nx]>d[p.first][p.second]+cost&&0<=ny&&ny<h&&0<=nx&&nx<w){
                d[ny][nx]=d[p.first][p.second]+cost;
                q.push(P(ny,nx));
            }
        }
    }
    return t>=d[gy][gx];
}
int main(void){
    scanf("%d %d %d",&h,&w,&t);
    int i,j;
    for(i=0;i<h;i++){
        scanf("%s",s[i]);
    }
    for(int i=0;i<h;i++){
        for(j=0;j<w;j++){
        if(s[i][j]=='S'){
            sx=j;
            sy=i;
        }
        if(s[i][j]=='G'){
            gx=j;
            gy=i;
        }
        }
    }
        int lo=1,hi=t;
    while((hi-lo)>1){
        int mi=(lo+hi)/2;
        if(bfs(mi)){
            lo=mi;
        }else{
            hi=mi;
        }
    }
    cout<<lo<<endl;
    return 0;
}
