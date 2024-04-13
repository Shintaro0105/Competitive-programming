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
    string s;cin>>s;
    int q;cin>>q;
    int flag=0;
    vector<char> fr,ba;
    rep(i,q){
        int t;cin>>t;
        if(t==1){
            flag=1-flag;
        }else{
            int f;cin>>f;
            char c;cin>>c;
            if(flag==0){
                if(f==1){
                    fr.push_back(c);
                }else{
                    ba.push_back(c);
                }
            }else{
                if(f==1){
                    ba.push_back(c);
                }else{
                    fr.push_back(c);
                }
            }
        }
    }
    if(flag==0){
        reverse(ALL(s));
        rep(i,fr.size()){
            s+=fr[i];
        }
        reverse(ALL(s));
        rep(i,ba.size()){
            s+=ba[i];
        }
    }else{
        reverse(ALL(s));
        rep(i,fr.size()){
            s+=fr[i];
        }
        reverse(ALL(s));
        rep(i,ba.size()){
            s+=ba[i];
        }
        reverse(ALL(s));
    }
    //cout<<flag<<endl;
    cout<<s<<endl;
    return 0;
}