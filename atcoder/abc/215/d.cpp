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

int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

int lcm(int a, int b){
  return a*b / gcd(a, b);
}

bool is_prime(const unsigned n){
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: // fall-through
        case 3: return true;
    } // n > 3 が保証された

    if(n % 2 == 0 || n % 3 == 0) return false;
    // n は 2 と 3 のいずれの倍数でもないことが保証された
    // これより n は (6の倍数)-1 か (6の倍数)+1 である

    // 6の倍数前後の数を使って試し割りをする
    for(unsigned i = 5; i * i <= n; i += 6) {
        if(n % i     == 0) return false; // (6の倍数)-1
        if(n % (i+2) == 0) return false; // (6の倍数)+1
    }

    return true;
}

int main(){
    int n,m;cin>>n>>m;
    int a[n];
    vector<int> v;
    rep(i,m){
        if(is_prime(i+1)){
            v.push_back(i+1);
        }
    }
    const int L=100001;
    vector<bool> i_ans(m+1,true);
    rep(i,n){
        cin>>a[i];
        for(auto x:v){
            if(a[i]%x==0){
                /* if(find(i_ans.begin(),i_ans.end(),x)==i_ans.end()){
                    i_ans.push_back(x);
                    //cout<<x<<endl;
                } */
                for(int j=x;j<=m;j+=x){
                    i_ans[j]=false;
                }
                
            }
        }
    }
    int cnt=0;
    rep(i,m){
        if(i_ans[i+1]) cnt++;
    }
    cout<<cnt<<endl;
    rep(i,m){
        if(i_ans[i+1]) cout<<i+1<<endl;;
    }
    /* vector<int> ans(L);
    rep(i,m){
        bool t=true;
        for(auto x:i_ans){
            if((i+1)%x==0){
                t=false;
            }
        }
        if(t){
            if(find(ans.begin(),ans.end(),i+1)==ans.end()){
                ans.push_back(i+1);
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<endl;
    } */

    return 0;
}