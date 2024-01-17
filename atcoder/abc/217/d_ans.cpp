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


int main(){
    int L,q;cin>>L>>q;
    set<int> s;
    s.insert(0);
    s.insert(L);
    rep(qi,q){
        int c,x;cin>>c>>x;
        if(c==1){
            s.insert(x);
        }else{
            auto it = s.lower_bound(x);
            int r = *it;
            --it;
            int l =*it;
            int ans=r-l;
            cout<<ans<<endl;
        }
    }

    return 0;
}