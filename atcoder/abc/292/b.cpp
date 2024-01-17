#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> ok(n,0);
    rep(i,q){
        int c,x;
        cin>>c>>x;
        x--;
        if(c==1){
            ok[x]++;
        }else if(c==2){
            ok[x]+=2;
        }else{
            if(ok[x]>=2){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}