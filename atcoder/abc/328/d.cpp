#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    string s;cin>>s;
    int n=s.size();
    set<int> st;
    rep(i,n){
        st.insert(i);
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    rep(i,n-2){
        string t;
        t+=s[i];
        t+=s[i+1];
        t+=s[i+2];
        if(t=="ABC")pq.push(i);
    }
    while(!pq.empty()){
        int i=pq.top();
        pq.pop();
        auto it=st.lower_bound(i);
        auto itr=it;
        vector<int> e;
        e.push_back(*it);
        it++;
        e.push_back(*it);
        it++;
        e.push_back(*it);
        bool f1=false,f2=false,f3=false,f4=false;
        if(itr!=st.begin()){
            itr--;
            if(s[*itr]=='A'){
                f1=true;
            }else if(s[*itr]=='B'){
                if(itr!=st.begin()){
                    itr--;
                    if(s[*itr]=='A'){
                        f2=true;
                    }
                }
            }
        }
        it++;
        if(it!=st.end()){
            if(s[*it]=='C'){
                f4=true;
            }else if(s[*it]=='B'){
                it++;
                if(it!=st.end()){
                    if(s[*it]=='C'){
                        f3=true;
                    }
                }
            }
        }
        if(f1&&f3)pq.push(*itr);
        if(f2&&f4)pq.push(*itr);
        for(int i:e)st.erase(i);
    }
    string ans;
    for(int i:st){
        ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}