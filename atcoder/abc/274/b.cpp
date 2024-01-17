#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> c(h,vector<char>(w));
    rep(i,h)rep(j,w)cin>>c[i][j];
    vector<int> x(w);
    rep(j,w){
        int sum=0;
        rep(i,h){
            if(c[i][j]=='#')sum++;
        }
        x[j]=sum;
    }
    rep(i,w-1)cout<<x[i]<<' ';
    cout<<x[w-1]<<endl;
    return 0;
}