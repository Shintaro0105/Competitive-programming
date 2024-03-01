#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n;cin>>n;
    vector<pair<int,int>> a(1L<<n);
    rep(i,1L<<n){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    rep(j,n-1){
        vector<pair<int,int>> b;
        rep(i,a.size()/2){
            if(a[2*i+1].first<a[2*i].first){
                b.push_back(a[2*i]);
            }else{
                b.push_back(a[2*i+1]);
            }
        }
        //cout<<endl;
        a=b;
        //sort(ALL(a));
    }
    if(a[0].first>a[1].first){
        cout<<a[1].second<<endl;
    }else{
        cout<<a[0].second<<endl;
    }
    return 0;
}