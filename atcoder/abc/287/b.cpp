#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n),t(m);
    rep(i,n)cin>>s[i];
    rep(i,m)cin>>t[i];
    int sum=0;
    rep(i,n){
        string u;
        u+=s[i][3];
        u+=s[i][4];
        u+=s[i][5];
        bool flag=false;
        rep(j,m){
            if(t[j]==u)flag=true;
        }
        if(flag)sum++;
        //cout<<u<<endl;
    }
    cout<<sum<<endl;
    return 0;
}