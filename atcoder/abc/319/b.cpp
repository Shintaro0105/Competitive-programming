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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<int> a;
    rep(i,9){
        if(n%(i+1)==0)a.push_back(i+1);
    }
    string s;
    rep(i,n+1){
        char c='-';
        for(int j:a){
            if(i%(n/j)==0){
                c='0'+j;
                break;
            }
        }
        s+=c;
    }
    cout<<s<<endl;
    return 0;
}