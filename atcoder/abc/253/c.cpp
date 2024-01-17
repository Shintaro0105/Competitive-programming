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
    int q;
    cin>>q;
    vector<P> m;
    rep(qi,q){

        int i;
        cin>>i;
        //cout<<"   "<<i<<endl;
        if(i==1){
            int X;cin>>X;
            bool flag=false;
            for(auto& [x,y]:m){
                if(x==X){
                    y++;
                    flag=true;
                    break;
                }
            }
            if(!flag)m.push_back(make_pair(X,1));
        }else if(i==2){
            int X,c;
            cin>>X>>c;
            for(auto& [x,y]:m){
                if(x==X){
                    y-=min(c,x);
                    break;
                }
            }
        }else if(i==3){
            int mx=-1,mn=inf;
            for(auto& [x,y]:m){
                if(y>0){
                    mx=max(mx,x);
                    mn=min(mn,x);
                }
            }
            cout<<mx-mn<<endl;
        }
    }

    return 0;
}