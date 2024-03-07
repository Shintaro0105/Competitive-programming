#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;cin>>s;
    vector<int> num(10,0);
    rep(i,s.size()){
        num[s[i]-'0']++;
    }
    bool flag=false;
    rep(i,1000){
        int n=i;
        if(n%8!=0||n==0)continue;
        vector<int> cnt(10,0);
        int c=0;
        while(n){
            cnt[n%10]++;
            n/=10;
            c++;
        }
        bool ok=true;
        if(c<3&&c<s.size())ok=false;
        rep(j,10){
            if(cnt[j]>num[j]){
                ok=false;
            }
        }
        if(ok){
            //cout<<i<<endl;
            flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}