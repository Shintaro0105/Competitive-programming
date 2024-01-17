#include <iostream>
#include <map>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,q;cin>>n>>q;
    map<int,set<int>> mp;
    rep(qi,q){
        int t,a,b;cin>>t>>a>>b;
        if(t==1){
            mp[a].insert(b);
        }else if(t==2){
            mp[a].erase(b);
        }else{
            auto ita=mp[a].lower_bound(b);
            auto itb=mp[b].lower_bound(a);
            if(*ita==b&&*itb==a){
                cout<<"Yes"<<'\n';
            }else{
                cout<<"No"<<'\n';
            }
        }
    }
    return 0;
}