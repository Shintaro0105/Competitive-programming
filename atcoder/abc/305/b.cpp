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
    int v[7]={0,3,1,4,1,5,9};
    char c[2];
    cin>>c[0]>>c[1];
    sort(c,c+2);
    rep(i,6){
        v[i+1]+=v[i];
    }
    cout<<v[(int)(c[1]-'A')]-v[(int)(c[0]-'A')]<<endl;
    return 0;
}