#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> l(n);
    rep(i,n)cin>>l[i];
    int cnt=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(l[i]==l[j]||l[i]==l[k]||l[j]==l[k])continue;
                if(l[i]+l[j]>l[k]&&l[i]+l[k]>l[j]&&l[j]+l[k]>l[i]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}