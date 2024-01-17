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
vector<int> bi(10,0);

bool f(const int& a, const int& b){
    int ca=0,cb=0;
    int A=a,B=b;
    vector<int> sa,sb;
    while(A>0){
        sa.push_back(A%10);
        A/=10;
        ca++;
    }
    while(B>0){
        sb.push_back(B%10);
        B/=10;
        cb++;
    }
    reverse(sa.begin(),sa.end());
    reverse(sb.begin(),sb.end());
    if(ca!=cb)return ca<cb;
    else{
        rep(i,ca){
            if(sa[i]!=sb[i]){
                return bi[sa[i]]<bi[sb[i]];
            }
        }
        return a<b;
    }
}

int main(){
    rep(i,10){
        int c;cin>>c;
        bi[c]=i;
    }
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end(),f);
    rep(i,n){
        cout<<a[i]<<'\n';
    }
    return 0;
}