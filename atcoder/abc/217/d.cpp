#include <iostream>
#include <vector>
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


int main(){
    int l,q;cin>>l>>q;
    vector<int> L;
    L.push_back(0);
    L.push_back(l);
    rep(qi,q){
        int c,x;cin>>c>>x;
        if(c-1){
            int a=0,b=l;
            for(int i:L){
                if(i<x){
                    a=max(a,i);
                }else if(i>x){
                    b=min(b,i);
                }
            }
            cout<<b-a<<endl;
        }else{
            L.push_back(x);
        }
    }
    return 0;
}