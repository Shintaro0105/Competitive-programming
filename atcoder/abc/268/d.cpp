#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

void dfs(int c,vector<string> &s,vector<string> &t,int r,string ans){
    if(r<0)return;
    if(c==s.size()){
        if(ans.size()>=3&&!binary_search(t.begin(),t.end(),ans)){
            cout<<ans<<endl;
            exit(0);
        }
        return;
    }
    if(ans.size()>0&&ans.back()!='_'){
        dfs(c,s,t,r,ans+"_");
    }else{
        dfs(c+1,s,t,r,ans+s[c]);
        if(ans.size()>0)dfs(c,s,t,r-1,ans+"_");
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    rep(i,n){
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    vector<string> t(m);
    rep(i,m){
        cin>>t[i];
    }
    sort(t.begin(),t.end());
    int r=16;
    rep(i,n){
        r-=s[i].size();
    }
    r-=n-1;
    do{
        dfs(0,s,t,r,"");
    }while(next_permutation(s.begin(),s.end()));
    cout<<-1<<endl;
    return 0;
}