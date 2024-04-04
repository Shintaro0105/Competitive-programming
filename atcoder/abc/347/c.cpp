#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n,a,b;cin>>n>>a>>b;
    vector<int> d(n);
    rep(i,n){
        cin>>d[i];
        d[i]%=a+b;
    }
    sort(ALL(d));
    int ma=-1;
    rep(i,n-1){
        ma=max(d[i+1]-d[i]-1,ma);
    }
    ma=max(ma,d[0]-1+a+b-d[n-1]);
    if(ma>=b)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}