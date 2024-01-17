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
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(m);
    vector<vector<int>> pos(n);
    rep(i,m){
        int k;cin>>k;
        a[i]=vector<int>(k);
        rep(j,k) cin>>a[i][j];
        rep(j,k){
            a[i][j]--;
            pos[a[i][j]].push_back(i);
        }
    }
    vector<int> cnt(n);
    queue<int> q;
    rep(i,m){
        int t=a[i].back();
        cout<<t<<endl;
        cnt[t]++;
    }
    rep(i,n) if(cnt[i]==2)q.push(i);
    int take =0;
    while(q.size()){
        int x =q.front();q.pop();
        take++;
        rep(i,2){
            int p=pos[x][i];
            a[p].pop_back();
            if(a[p].size()){
                int t=a[p].back();
                cnt[t]++;
                if(cnt[t]==2)q.push(t);
            }
        }
    }
    if(take==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}