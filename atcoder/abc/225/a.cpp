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
    string s;cin>>s;
    char v[3];
    rep(i,3) v[i]=s[i];
    sort(v,v+3);
    int cnt=0;
    do{
        cnt++;
    }while(next_permutation(v,v+3));
    cout<<cnt<<endl;
    return 0;
}