#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int n;cin>>n;
    vector<P> d(n);
    int cnt=0,tmp=0;
    rep(i,n){
        cin>>d[i].first>>d[i].second;
        if(d[i].first==d[i].second)tmp++;
        else tmp=0;
        cnt=max(cnt,tmp);
    }
    if(cnt>=3)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}