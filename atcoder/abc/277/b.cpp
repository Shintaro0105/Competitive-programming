#include <iostream>
#include <map>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    map<string,int> mp;
    bool flag=true;
    char m[4]={'H','D','C','S'},num[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    for(char a:m){
        for(char b:num){
            string s;
            s+=a;
            s+=b;
            mp[s]=1;
        }
    }
    rep(i,n){
        string s;
        cin>>s;
        if(mp[s]>1)flag=false;
        if(mp[s]==0)flag=false;
        mp[s]++;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}