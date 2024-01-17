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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<int> c(n);
    vector<string> t(m);
    vector<vector<int>> p(m);
    rep(i,n){
        cin>>c[i];
        c[i]--;
        t[c[i]]+=s[i];
        p[c[i]].push_back(i);
    }
    rep(i,m){
        string u;
        int l=t[i].size();
        u+=t[i][l-1];
        rep(j,l-1){
            u+=t[i][j];
        }
        t[i]=u;
    }
    rep(i,m){
        int k=0;
        for(int j:p[i]){
            s[j]=t[i][k];
            k++;
        }
    }
    cout<<s<<endl;
    return 0;
}