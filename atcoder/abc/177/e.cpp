#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    map<int,vector<int>> mp;
    rep(i,n){
        int a;cin>>a;
        for(int j=2;j*j<=a;j++){
            if(a%j==0){
                mp[j].push_back(i);
                while(a%j==0)a/=j;
            }
        }
        if(a!=1)mp[a].push_back(i);
    }
    bool flagc=false,flagp=true;
    for(auto x:mp){
        if(x.second.size()==n)flagc=true;
        else if(x.second.size()>1)flagp=false;
    }
    if(flagc)cout<<"not coprime"<<endl;
    else if(flagp)cout<<"pairwise coprime"<<endl;
    else cout<<"setwise coprime"<<endl;
    return 0;
}