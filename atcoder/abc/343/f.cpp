#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=b-1;i>=a;i--)
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x);
typedef long long ll;
typedef long double lld;
using namespace std;
using namespace atcoder;

typedef pair<int,int> P;
typedef tuple<int,int,int,int> P4;

P4 op(P4 a,P4 b){
    int x=get<0>(a);
    int xv=get<1>(a);
    int y=get<2>(a);
    int yv=get<3>(a);
    int z=get<0>(b);
    int zv=get<1>(b);
    int w=get<2>(b);
    int wv=get<3>(b);
    map<int,int> mp;
    mp[x]+=xv;
    mp[y]+=yv;
    mp[z]+=zv;
    mp[w]+=wv;
    vector<P> v;
    for(auto p:mp){
        v.pb(p);
    }
    reverse(all(v));
    P4 res=P4(v[0].first,v[0].second,v[1].first,v[1].second);
    return res;
}

P4 e(){
    return P4(0,0,0,0);
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin >> N;
    int Q;cin >> Q;
    vector<int> A(N);rep(i,0,N)cin >> A[i];
    segtree<P4,op,e> seg(N);
    rep(i,0,N){
        seg.set(i,P4(A[i],1,0,0));
    }
    vector<int> ans;
    rep(_,0,Q){
        int t;cin >> t;
        if(t==1){
            int p;cin >> p;p--;
            int x;cin >> x;
            seg.set(p,P4(x,1,0,0));
        }
        else if(t==2){
            int l,r;cin >> l >> r;l--;
            P4 val=seg.prod(l,r);
            ans.pb(get<3>(val));
        }
    }
    for(int x:ans){
        cout << x << endl;
    }

}