#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n),b(n);
    int sum=0;
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    vector<pair<bool,string>> p(1e4+1);
    for(auto [f,t]:p){
        f=false;
    }
    p[0].first=true;
    rep(i,n){
        vector<pair<bool,string>> pp(1e4+1);
        for(auto [f,t]:pp){
            f=false;
        }
        rep(j,1e4+1){
            auto [f,t]=p[j];
            if(f){
                pp[j+a[i]].first=true;
                pp[j+a[i]].second=t+'H';
                pp[j+b[i]].first=true;
                pp[j+b[i]].second=t+'T';
            }
        }
        p=pp;
    }
    if(p[s].first){
        cout<<"Yes"<<endl;
        cout<<p[s].second<<endl;
    }else{
        cout<<"No"<<endl;
    }
}