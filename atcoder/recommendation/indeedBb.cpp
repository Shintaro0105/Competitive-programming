#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    string s,t;cin>>s>>t;
    string S=s;
    int l=s.size();
    bool flag=false;
    int cnt=0;
    rep(i,l){
        string u;
        u+=s[l-1];
        rep(j,l-1){
            u+=s[j];
        }
        //cout<<u<<endl;
        if(u==t){
            cnt=i+1;
            flag=true;
            break;
        }
        
        swap(u,s);
    }
    if(t==S)cnt=0;
    if(flag){
        cout<<cnt<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}