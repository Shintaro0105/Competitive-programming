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


int main(){
    string s1,s2,s3,t,ans;
    cin>>s1>>s2>>s3>>t;
    rep(i,t.size()){
        char c=t[i];
        if(c=='1'){
            ans+=s1;
        }else if(c=='2'){
            ans+=s2;
        }else if(c=='3'){
            ans+=s3;
        }
    }
    cout<<ans<<endl;
    return 0;
}