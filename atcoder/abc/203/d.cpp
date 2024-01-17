#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n,k;cin >> n >> k;
    vector a(n,vector<int>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    int L = k*k/2+1;

    int wa = -1,ac = 1001001001;
    //二分探索
    while(wa+1 < ac){
        int wj = (wa+ac)/2;
        bool ok = false;
        {
            vector s(n+1,vector<int>(n+1));
            rep(i,n)rep(j,n) s[i+1][j+1] = a[i][j]>wj?1:0; //trueなら+1　falseなら+0
            rep(i,n+1)rep(j,n) s[i][j+1] += s[i][j];
            rep(i,n)rep(j,n+1) s[i+1][j] += s[i][j];
            rep(i,n-k+1)rep(j,n-k+1){
                int now = s[i+k][j+k];
                now -= s[i][j+k];
                now -= s[i+k][j];
                now += s[i][j];
                if(now < L) ok = true;
            }
        }
        if(ok) ac = wj; else wa = wj;
    }
    cout << ac << endl;
    return 0;

}