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
    string s;cin>>s;
    vector<char> c;
    rep(i,s.size()){
        c.push_back(s[i]);
    }
    sort(c.begin(),c.end());
    rep(i,s.size()){
        printf("%c",c[i]);
    }
    printf("\n");
    return 0;
}