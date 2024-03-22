#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int op(int a,int b){
    return min(a,b);
}

int e(){
    return 1e9+1;
}

int main(){
    int n,q;cin>>n>>q;
    segtree<int,op,e> seg(2e5);
    vector<int> a(n),b(n);
    vector<multiset<int>> st(2e5);
    vector<int> be(n);
    rep(i,n){
        cin>>a[i]>>b[i];
        b[i]--;
        st[b[i]].insert(a[i]);
        be[i]=b[i];
    }
    //cout<<endl;
    rep(i,2e5){
        if(st[i].size()){
            seg.set(i,*st[i].rbegin());
            //cout<<i<<' '<<*st[i].rbegin()<<endl;
        }
    }
    while(q){
        int c,d;cin>>c>>d;
        c--;d--;
        auto it=st[be[c]].find(a[c]);
        st[be[c]].erase(it);
        st[d].insert(a[c]);
        if(st[be[c]].size()){
            seg.set(be[c],*st[be[c]].rbegin());
        }else{
            seg.set(be[c],1e9+1);
        }
        seg.set(d,*st[d].rbegin());
        be[c]=d;
        cout<<seg.all_prod()<<endl;
        q--;
    }
    return 0;
}