#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> p(n);
    vector f(n,vector<bool>(m,false));
    rep(i,n){
        cin>>p[i];
        int c;cin>>c;
        rep(j,c){
            int F;cin>>F;
            F--;
            f[i][F]=true;
        }
    }
    bool flag=false;
    rep(i,n){
        rep(j,n){
            if(i!=j&&p[i]>=p[j]){
                bool c2=true,c3=false;
                rep(k,m){
                    if(f[i][k]&&!f[j][k])c2=false;
                    if(f[j][k]&&!f[i][k])c3=true;
                }
                if(c2&&(c3||p[i]>p[j]))flag=true;
            }
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}