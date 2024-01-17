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
    int n;
    cin>>n;
    multiset<int> a;
    rep(i,n){
        int b;
        cin>>b;
        a.insert(b);
    }
    int cnt=0;
    while(a.size()>1){
        auto l=a.begin();
        auto r=a.end();
        r--;
        a.erase(a.find(*r));
        //cout<<*l<<' '<<*r<<'\n';
        int c= (*r) % (*l);
        if(c!=0)a.insert(c);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}