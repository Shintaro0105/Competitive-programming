#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    char t[s.size()];
    rep(i,s.size())t[i]=s[i];
    sort(t,t+s.size());
    do{
        if(k==1)break;
        else k--;
    }while(next_permutation(t,t+s.size()));
    rep(i,s.size())cout<<t[i];
    cout<<endl;
    return 0;
}