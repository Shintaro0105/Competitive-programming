#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),e,o;
    rep(i,n){
        cin>>a[i];
        if(a[i]%2==0){
            e.push_back(a[i]);
        }else{
            o.push_back(a[i]);
        }
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    int es=e.size(),os=o.size();
    if(es==1&&os==1){
        cout<<-1<<endl;
    }else{
        int ans=-1;
        if(es>=2){
            ans=max(ans,e[es-1]+e[es-2]);
        }
        if(os>=2){
            ans=max(ans,o[os-1]+o[os-2]);
        }
        cout<<ans<<endl;
    }
    return 0;
}