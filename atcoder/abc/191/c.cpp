#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    int sum=0;
    int dx[4]={0,1,0,1},dy[4]={0,0,1,1};
    rep(i,h-1){
        rep(j,w-1){
            int num=0;
            rep(k,4){
                int nx=i+dx[k],ny=j+dy[k];
                if(s[nx][ny]=='#')num++;
            }
            if(num==1||num==3){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}