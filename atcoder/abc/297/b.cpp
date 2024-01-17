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

int main(){
    string s;cin>>s;
    vector<int> b,k,r;
    rep(i,8){
        if(s[i]=='B')b.push_back(i);
        else if(s[i]=='R')r.push_back(i);
        else if(s[i]=='K')k.push_back(i);
    }
    if(b[0]%2!=b[1]%2&&r[0]<k[0]&&k[0]<r[1])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}