#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;cin>>s;
    int n=s.size();
    vector<vector<bool>> f(n,vector<bool>(26,false));
    bool flag=true;
    int d=0;
    rep(i,n){
        int c=s[i]-'a';
        if('a'<=s[i]&&s[i]<='z'){
            if(!f[d][c])f[d][c]=true;
            else flag=false;
        }else if(s[i]==')'){
            rep(j,26){
                f[d][j]=false;
            }
            d--;
        }else{
            d++;
            rep(j,26){
                if(f[d-1][j])f[d][j]=true;
            }
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}