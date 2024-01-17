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
    string s;
    cin>>s;
    int c[7];
    rep(i,7){
        if(s[i]=='a')c[i]=1;
        else if(s[i]=='t')c[i]=2;
        else if(s[i]=='c')c[i]=3;
        else if(s[i]=='o')c[i]=4;
        else if(s[i]=='d')c[i]=5;
        else if(s[i]=='e')c[i]=6;
        else if(s[i]=='r')c[i]=7;
    }
    int cnt=0;
    rep(i,7)rep(j,6){
        if(c[j]>c[j+1]){
            swap(c[j],c[j+1]);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}