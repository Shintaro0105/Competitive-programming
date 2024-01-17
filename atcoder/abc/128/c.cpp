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
vector<int> K[10];
int p[10];

int main(){
    int n,m;cin >> n >> m;
    rep(i,m){
        int k;cin >> k;
        rep(j,k){
            int s;cin >> s;s--;
            K[i].push_back(s);
        }
    }
    rep(i,m)cin >> p[i];
    int ans=0;
    
    rep(i,pow(2,n)){
        int count=0;
        bitset<10> b(i);
        rep(j,m){
            int ok = 0;
            for(int s:K[j]){
                if(b[s]==1)ok++;
            }
            if(ok%2==p[j]){
                count++;
            }
        }
        if(count==m)ans++;
    }
    cout << ans << endl;
}