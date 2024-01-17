#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),c(n+1,0);
    vector<bool> b(n+1,false);
    int over=0;
    rep(i,n){
        cin>>a[i];
        if(a[i]<=n){
            c[a[i]]++;
            b[a[i]]=true;
        }else{
            over++;
        }
    }
    int res=-1;
    bool ok=true;
    rep(i,k+1){
        if(ok){
            if(b[i]){
                if(n-c[i]>=k){
                    res=max(res,i);
                }
            }else{
                res=max(res,i);
                ok=false;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}