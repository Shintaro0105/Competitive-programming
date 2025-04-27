#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

//wrong

int main(){
    int q;cin>>q;
    multiset<string> x,y;
    rep(i,q){
        int t;cin>>t;
        if(t==1){
            string s;cin>>s;
            x.insert(s);
            for(string u:y){
                if(u.size()>=s.size()){
                    if(u.substr(0,s.size())==s)y.erase(u);
                }
            }
        }else{
            string s;cin>>s;
            bool flag=true;
            rep(i,s.size()){
                if(x.count(s.substr(0,i+1)))flag=false;
            }
            if(flag)y.insert(s);
        }
        cout<<y.size()<<endl;
    }
    return 0;
}