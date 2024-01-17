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
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    x+=1e4;
    y+=1e4;
    vector<bool> dx(2e4+1,false),dy(2e4+1,false);
    dy[1e4]=true;
    dx[1e4+a[0]]=true;
    for(int i=2;i<n;i+=2){
        vector<bool> p(2e4+1,false);
        rep(j,2e4+1){
            if(dx[j]){
                if(j+a[i]<2e4+1){
                    p[j+a[i]]=true;
                }
                if(0<=j-a[i]){
                    p[j-a[i]]=true;
                }
            }
        }
        swap(dx,p);
    }
    for(int i=1;i<n;i+=2){
        vector<bool> p(2e4+1,false);
        rep(j,2e4+1){
            if(dy[j]){
                if(j+a[i]<2e4+1){
                    p[j+a[i]]=true;
                }
                if(0<=j-a[i]){
                    p[j-a[i]]=true;
                }
            }
        }
        swap(dy,p);
    }
    if(dx[x]&&dy[y])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}