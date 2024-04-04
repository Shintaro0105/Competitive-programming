#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n,q;cin>>n>>q;
    vector<ll> a(n,0),in(n,-1),s(q+1,0);
    set<int> st;
    rep(i,q){
        int x;cin>>x;
        x--;
        auto it=st.find(x);
        if(it==st.end()){
            st.insert(x);
            in[x]=i;
            s[i+1]=s[i]+st.size();
        }else{
            st.erase(it);
            a[x]+=s[i]-s[in[x]];
            in[x]=-1;
            s[i+1]=s[i]+st.size();
        }
    }
    rep(i,n)if(in[i]!=-1)a[i]+=s[q]-s[in[i]];
    rep(i,n)cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}