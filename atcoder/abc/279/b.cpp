#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()<t.size()){
        cout<<"No"<<endl;
    }else{
        rep(i,s.size()-t.size()+1){
            bool flag=true;
            rep(j,t.size()){
                if(s[i+j]!=t[j]) flag=false;
            }
            if(flag){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        cout<<"No"<<endl;
    }
    return 0;
}