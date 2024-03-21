#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int x,n;cin>>x>>n;
    vector<bool> p(102,true);
    rep(i,n){
        int a;cin>>a;
        p[a]=false;
    }
    P ans=make_pair(101-x,101);
    for(int i=101;i>=0;i--){
        if(p[i]){
            if(abs(i-x)<=ans.first){
                ans.first=abs(i-x);
                ans.second=i;
            }
        }
    }
    cout<<ans.second<<endl;
    return 0;
}