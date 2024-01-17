#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    int sum=0;
    rep(i,h)rep(j,w){
        if(s[i][j]=='#')sum++;
    }
    cout<<sum<<endl;
    return 0;
}