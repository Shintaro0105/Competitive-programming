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
    map<string,int> mp;
    mp["tourist"]=3858;
    mp["ksun48"]=3679;
    mp["Benq"]=3658;
    mp["Um_nik"]=3648;
    mp["apiad"]=3638;
    mp["Stonefeang"]=3630;
    mp["ecnerwala"]=3613;
    mp["mnbvmar"]=3555;
    mp["newbiedmy"]=3516;
    mp["semiexp"]=3481;
    string s;cin>>s;
    cout<<mp[s]<<endl;
    return 0;
}