#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    x--;y--;
    int ans=1;
    char s[h][w];
    rep(i,h)rep(j,w)cin>>s[i][j];
    int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
    for(int i=0;i<4;i++){
        int nx=x,ny=y;
        while(1){
            nx+=dx[i];
            ny+=dy[i];
            if(0<=nx&&nx<h&&0<=ny&&ny<w){
                if(s[nx][ny]=='.')ans++;
                else break;
            }else{
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}