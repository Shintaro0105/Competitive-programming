#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    string p="ABCDE";
    int sf=-1,tf=-1;
    for(int i=0;i<5;i++){
        if(s[0]==p[i]){
            if(s[1]==p[(i+1)%5]||s[1]==p[(i+5-1)%5])sf=0;
            else sf=1;
        }
        if(t[0]==p[i]){
            if(t[1]==p[(i+1)%5]||t[1]==p[(i+5-1)%5])tf=0;
            else tf=1;
        }
    }
    if(sf==tf)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}