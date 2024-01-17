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

string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? '0' : '1' );
        n /= 2;
    }
    return r;
}

int main(){
    string s;cin>>s;
    ll n;cin>>n;
    string sn=toBinary(n);
    reverse(sn.begin(),sn.end());
    //cout<<sn<<endl;
    vector<int> ans(60,0);
    bool flag=true;
    int ls=s.size(),lsn=sn.size();
    rep(i,ls){
        if(s[i]=='1')ans[59-(ls-i-1)]=1;
        else if(s[i]=='?')ans[59-(ls-i-1)]=2;
    }
    rep(i,60){
        if(ans[i]==1){
            if(lsn<59-i){
                flag=false;
            }
        }else if(ans[i]==2){
            if(lsn<59-i){
                ans[i]=0;
            }
        }
    }
    bool f=false;
    rep(i,lsn){
        if(sn[i]=='1'&&ans[59-(lsn-i-1)]==0){
            f=true;
        }else if(sn[i]=='0'&&ans[59-(lsn-i-1)]==1&&!f){
            flag=false;
        }else if(ans[59-(lsn-i-1)]==2){
            if(f)ans[59-(lsn-i-1)]=1;
            else{
                if(sn[i]=='1')ans[59-(lsn-i-1)]=1;
                else ans[59-(lsn-i-1)]=0;
            }
        }
    }
    if(flag){
        ll j=1,sum=0;
        rep(i,60){
            if(ans[59-i]==1){
                sum+=j;
            }
            j*=2;
        }
        printf("%lld\n",sum);
    }else{
        cout<<-1<<endl;
    }
    return 0;
}