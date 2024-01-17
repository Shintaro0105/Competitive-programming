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
    int n,q;cin>>n>>q;
    vector<set<int>> c(n);
    rep(i,n){
        int ci;
        cin>>ci;
        c[i].insert(ci);
    }
    rep(i,q){
        int a,b;
        cin>>a>>b;
        a--;b--;
        if(c[a].size()<c[b].size()){
            for(int j:c[a]){
                c[b].insert(j);
            }
        }else{
            for(int j:c[b]){
                c[a].insert(j);
            }
            swap(c[a],c[b]);
        }
        c[a].clear();
        cout<<c[b].size()<<endl;
    }
    return 0;
}