#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main(){
    int n,k;
    cin>>n>>k;
    vector<string> s(k);
    rep(i,n){
        string t;
        if(i<k){cin>>s[i];
        }else {cin>>t;}
    }
    sort(s.begin(),s.end());
    rep(i,k){
        cout<<s[i]<<'\n';
    }
    return 0;
}