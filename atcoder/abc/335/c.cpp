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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,q;cin>>n>>q;
    vector<P> h;
    h.push_back(make_pair(0,0));
    int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
    string ref="RLUD";
    int now=0;
    rep(qi,q){
        int t;cin>>t;
        if(t==1){
            char c;cin>>c;
            rep(i,4){
                if(ref[i]==c){
                    auto it=h.end();
                    it--;
                    h.push_back(make_pair((*it).first+dx[i],(*it).second+dy[i]));
                    //cout<<(*it).first+dx[i]<<' '<<(*it).second+dy[i]<<endl;;
                }
            }
            now++;
        }else{
            int p;cin>>p;
            if(now-p>=0){
                cout<<1+h[now-p+1].first<<' '<<0+h[now-p+1].second<<endl;
            }else{
                cout<<p-now<<' '<<0<<endl;
            }
        }
    }
    
    return 0;
}