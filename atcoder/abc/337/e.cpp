#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>> a(7);
    for(int i=1;i<n;i++){
        int now=i;
        rep(j,7){
            if(i>>j&1==1){
                a[j].push_back(i);
            }
        }
    }
    int m=0;
    rep(i,7){
        if(a[i].size()>0)m++;
    }
    cout<<m<<endl;
    rep(i,m){
        cout<<a[i].size()<<' ';
        rep(j,a[i].size())cout<<a[i][j]<<' ';
        cout<<endl;
    }
    string s;cin>>s;
    int x=0,j=1;
    rep(i,s.size()){
        if(s[i]=='1'){
            x+=j;
        }
        j*=2;
    }
    if(x==0){
        cout<<n<<endl;
    }else{
        cout<<x<<endl;
    }
    return 0;
}