#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int t;cin>>t;
    rep(ti,t){
        ll a,s;
        cin>>a>>s;
        int c=0;
        bool flag=true;
        rep(i,60){
            if((a>>i)&1){
                if((s>>i)&1){
                    if(c!=1){
                        flag=false;
                    }
                }else{
                    if(c!=0){
                        flag=false;
                    }
                }
                c=1;
            }else{
                if((s>>i)&1){
                    c=0;
                }else{
                    if(c==1){
                        c=1;
                    }else{
                        c=0;
                    }
                }
            }
        }
        if(c==1)flag=false;
        if(flag){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
        }
    }
    return 0;
}