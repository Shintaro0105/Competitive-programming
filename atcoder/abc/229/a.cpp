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
    string s[2];cin>>s[0]>>s[1];
    string t[2];
    t[1]="##";
    t[0]="##";
    rep(i,2)rep(j,2){
        if(s[i][j]=='#'){
            if(i==0&&j==0){
                t[0][1]='.';
                t[1][0]='.';
            }else if(i==0&&j==1){
                t[0][0]='.';
                t[1][1]='.';
            }else if(i==1&&j==0){
                t[0][0]='.';
                t[1][1]='.';
            }else{
                t[0][1]='.';
                t[1][0]='.';
            }
        }
    }
    bool flag=true;
    rep(i,2)rep(j,2){
        if(t[i][j]=='#')flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}