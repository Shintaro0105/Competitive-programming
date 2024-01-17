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
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n;cin>>n;
    pair<int,int> P[n];
    rep(i,n){
        cin>>P[i].first;
        P[i].second = i;
    }
    sort(P,P+n);
    cout<<P[n-2].second+1<<endl;
    return 0;
}