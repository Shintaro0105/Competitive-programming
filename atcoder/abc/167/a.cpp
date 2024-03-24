#include <iostream>
using namespace std;

int main(){
    string s,t;cin>>s>>t;
    for(char c='a';c<='z';c++){
        string now=s;
        now+=c;
        if(now==t){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}