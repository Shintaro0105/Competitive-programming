#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> a;
    rep(i,n){
        int b;cin>>b;
        if(b%k==0)a.push_back(b/k);
    }
    sort(ALL(a));
    rep(i,a.size())cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}