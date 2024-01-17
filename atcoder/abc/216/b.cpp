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


int main(){
    int n;cin>>n;
    pair<string,string> p[n];
    rep(i,n){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    bool flag=false;
    rep(i,n-1){
        for(int j=i+1;j<n;j++){
            if(p[i].first==p[j].first&&p[i].second==p[j].second) flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}