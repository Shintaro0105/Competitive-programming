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
using namespace std;
using ll = long long int;

int main(){
    ll n,k;
    cin>>n>>k;
    vector<int> s;
    ll K=k;
    while(K>0){
        s.push_back(K%10);
        K/=10;
    }
    ll ki=0;
    for(int c:s){
        ki=ki*10+c;
    }
    //cout<<ki<<endl;
    if(ki<k){
        cout<<0<<endl;
        return 0;
    }
    set<int> ans;
    while(k<=n){
        if(k<=n)ans.insert(k);
        k*=10;
    }
    while(ki<=n){
        if(ki<=n)ans.insert(ki);
        ki*=10;
    }
    cout<<ans.size()<<endl;
    return 0;
}