#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> x(n);
    rep(i,m){
        int k;
        cin>>k;
        rep(j,k){
            int y;
            cin>>y;
            y--;
            x[y].push_back(i);
        }
    }
    bool flag=true;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            vector<bool> p(m,false);
            for(int k:x[i]){
                p[k]=true;
            }
            bool f=false;
            for(int k:x[j]){
                if(p[k])f=true;
            }
            if(!f)flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}