#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<double> r(n);
    rep(i,n)cin>>r[i];
    sort(r.begin(),r.end(),greater<double>());
    double c=0;
    for(int i=k-1;i>=0;i--){
        c=(c+r[i])/2;
    }
    cout<<fixed<<setprecision(10)<<c<<endl;
    return 0;
}