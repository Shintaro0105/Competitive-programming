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
    int n;cin>>n;
    vector<P> p(n);
    rep(i,n){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end());
    int ans=0;
    rep(i,n)rep(j,n){
        if(p[i].first<p[j].first&&p[i].second<p[j].second){
            if(binary_search(p.begin(), p.end(), make_pair(p[i].first, p[j].second))
            && binary_search(p.begin(), p.end(), make_pair(p[j].first, p[i].second))){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}