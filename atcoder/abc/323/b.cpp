#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using P = pair<int,int>;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    vector<P> p(n);
    rep(i,n){
        cin>>s[i];
        int sum=0;
        rep(j,n){
            if(s[i][j]=='o')sum++;
        }
        p[i]=make_pair(-sum,i+1);
    }
    sort(ALL(p));
    rep(i,n-1)cout<<p[i].second<<' ';
    cout<<p[n-1].second<<endl;
    return 0;
}