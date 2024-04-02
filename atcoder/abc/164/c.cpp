#include <iostream>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    map<string,int> mp;
    rep(i,n){
        string s;cin>>s;
        mp[s]++;
    }
    cout<<mp.size()<<endl;
    return 0;
}