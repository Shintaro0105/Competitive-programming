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
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    string c;cin>>c;
    int l=c.size();
    string s[l];
    rep(i,l){
        rep(j,l){
            if(i+j<l){
                s[i]+=c[i+j];
            }else{
                s[i]+=c[-l+j+i];
            }
            
        }
        //cout<<s[i]<<endl;
    }
    sort(s,s+l);
    cout<<s[0]<<endl;
    cout<<s[l-1]<<endl;
    return 0;
}