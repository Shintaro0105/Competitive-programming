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
    int k,g,m;cin>>k>>g>>m;
    int gr=g,mg=m;
    rep(i,k){
        if(gr==g){
            gr=0;
        }else if(mg==0){
            mg=m;
        }else{
            if(mg<=g-gr){
                gr+=mg;
                mg-=mg;
            }else{
                mg-=g-gr;
                gr=g;
            }
        }
    }
    cout<<gr<<' '<<mg<<endl;
    return 0;
}