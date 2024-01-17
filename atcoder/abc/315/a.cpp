#include <iostream>
using namespace std;

int main(){
    string s,t;cin>>s;
    string el="aeiou";
    for(char c:s){
        bool flag=true;
        for(char e:el){
            if(c==e)flag=false;
        }
        if(flag)t+=c;
    }
    cout<<t<<endl;
    return 0;
}