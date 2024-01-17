#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int r,c;cin>>r>>c;
    char b[r][c];
    vector<pair<int,pair<int,int>>> p;
    rep(i,r)rep(j,c){
        cin>>b[i][j];
        if('1'<=b[i][j]&&b[i][j]<='9'){
            p.push_back({b[i][j]-'0',{i,j}});
        }
    }
    for(auto [z,q]:p){
        auto [x,y]=q;
        //cout<<z<<' '<<x<<' '<<y<<endl;
        for(int i=x-z;i<=x+z;i++){
            for(int j=y-z;j<=y+z;j++){
                if(0<=i&&i<r&&0<=j&&j<c&&abs(x-i)+abs(y-j)<=z){
                    b[i][j]='.';
                }
            }
        }
    }
    rep(i,r){
        rep(j,c){
            cout<<b[i][j];
        }
        cout<<'\n';
    }
    return 0;
}