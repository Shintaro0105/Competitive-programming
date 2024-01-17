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
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    int q;cin>>q;
    set<int> s;
    int i=1;
    rep(qi,q){
        int t;cin>>t;
        if(t==1){
            s.insert(i);
            i++;
        }else if(t==2){
            int x;cin>>x;
            s.erase(x);
        }else if(t==3){
            cout<<*s.begin()<<'\n';
        }
    }
    return 0;
}