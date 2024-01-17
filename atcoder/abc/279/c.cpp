#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    char s[h][w],t[h][w];
    rep(i,h)rep(j,w)cin>>s[i][j];
    rep(i,h)rep(j,w)cin>>t[i][j];
    vector<string> S(w),T(w);
    rep(j,w){
        string a,b;
        rep(i,h){
            a+=s[i][j];
            b+=t[i][j];
        }
        S[j]=a;
        T[j]=b;
    }
    sort(S.begin(),S.end());
    sort(T.begin(),T.end());
    bool flag=true;
    rep(i,w){
        if(S[i]!=T[i])flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}