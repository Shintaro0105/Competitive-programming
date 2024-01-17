#include <iostream>
#include <string>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int t;
    cin>>t;
    rep(ti,t){
        int n;
        string s;
        cin>>n>>s;
        int on=0;
        rep(i,n){
            if(s[i]=='1')on++;
        }
        if(on%2==1){
            cout<<-1<<'\n';
        }else{
            if(on==2){
                int f=s.find("11");
                if(f==string::npos){
                    cout<<1<<'\n';
                }else{
                    if(n==3){
                        cout<<-1<<'\n';
                    }else if(n==4){
                        if(f==1){
                            cout<<3<<'\n';
                        }else{
                            cout<<2<<'\n';
                        }
                    }else{
                        cout<<2<<'\n';
                    }
                }
            }else{
                cout<<on/2<<'\n';
            }
        }
    }
    return 0;
}