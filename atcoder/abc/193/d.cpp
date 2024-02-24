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
    double k;cin>>k;
    string s,t;cin>>s>>t;
    vector<int> st(9,k),sn(9,0),tn(9,0);
    double ans=0;
    rep(i,4){
        st[s[i]-'1']--;
        sn[s[i]-'1']++;
    }
    rep(i,4){
        st[t[i]-'1']--;
        tn[t[i]-'1']++;
    }
    rep(i,9){
        rep(j,9){
            vector<int> num(9,0);
            num[i]++;
            num[j]++;
            bool flag=true;
            rep(k,9){
                if(num[k]>st[k])flag=false;
            }
            if(flag){
                sn[i]++;
                tn[j]++;
                int cs=0,ct=0;
                rep(k,9){
                    cs+=(k+1)*pow(10,sn[k]);
                    ct+=(k+1)*pow(10,tn[k]);
                }
                if(cs>ct){
                    //cout<<cs<<' '<<ct<<endl;
                    if(i!=j){
                        ans+=(double)st[i]*(double)st[j];
                    }else{
                        ans+=(double)st[i]*((double)st[j]-1.0);
                    }
                    //cout<<i<<' '<<j<<endl;
                }
                sn[i]--;
                tn[j]--;
            }
        }
    }
    cout<<fixed<<setprecision(15)<<(double)ans/(double)((9*k-8)*(9*k-9))<<endl;
    return 0;
}