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
    string s;
    cin>>s;
    int q;
    cin>>q;
    vector<char> sf(n),sb(n);
    rep(i,n)sf[i]=s[i];
    rep(i,n)sb[i]=s[n+i];
    bool flag=true;
    rep(qi,q){
        int t,a,b;
        cin>>t>>a>>b;
        a--;b--;
        if(t==2){
            if(flag)flag=false;
            else flag=true;
        }else{
            if(flag){
                if(b<n){
                    swap(sf[a],sf[b]);
                }else if(a<n&&n<=b){
                    swap(sf[a],sb[b-n]);
                }else{
                    swap(sb[a-n],sb[b-n]);
                }
            }else{
                if(b<n){
                    swap(sb[a],sb[b]);
                }else if(a<n&&n<=b){
                    swap(sb[a],sf[b-n]);
                }else{
                    swap(sf[a-n],sf[b-n]);
                }
            }
        }
    }
    if(flag){
        rep(i,n)cout<<sf[i];
        rep(i,n)cout<<sb[i];
        cout<<endl;
    }else{
        rep(i,n)cout<<sb[i];
        rep(i,n)cout<<sf[i];
        cout<<endl;
    }
    return 0;
}