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
    vector<multiset<int>> box(n+1);
    map<int,set<int>> num;
    rep(qi,q){
        int t;cin>>t;
        if(t==1){
            int i,j;cin>>i>>j;
            box[j].insert(i);
            num[i].insert(j);
        }else if(t==2){
            int i;cin>>i;
            int k=box[i].size();
            for(int j:box[i]){
                if(k==1){
                    cout<<j<<'\n';
                }else{
                    cout<<j<<' ';
                }
                k--;
            }
        }else if(t==3){
            int i;cin>>i;
            int k=num[i].size();
            for(int j:num[i]){
                if(k==1){
                    cout<<j<<'\n';
                }else{
                    cout<<j<<' ';
                }
                k--;
            }
        }
    }
    return 0;
}